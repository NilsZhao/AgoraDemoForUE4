# 一、下载AgoraDemo使用示例

1. 解压AgoraDemo，将Remark文件夹下的RayvisionSocket插件放到4.27引擎插件的Runtime文件夹下（xxxx\UE_4.27\Engine\Plugins\Runtime）。
2. 点击运行AgoraDemo项目。弹窗，点击“是”即可。然后慢慢等待项目打开即可。
3. 声网插件下载地址：https://github.com/AgoraIO-Extensions/Agora-Unreal-RTC-SDK/releases
4. 使用其他Websocket连接云平台时，URL的获取可以参考示例。
5. 打开AgoraDemo项目后，可以不做修改直接打包，上传到云平台测试。若UE成功接收到鉴权信息，会显示UI；点击“数据请求”可以获取token和account；最后点击“连接通话”加入频道

---

# 二、流程说明

开启该功能前，请先联系销售专员。

### 1.鉴权消息收取

项目运行时，通信插件将会和云平台进行Websocket连接。连接成功后，云平台会给UE应用发送鉴权信息 {"_Agora_Service_Verify"：“xxxxxx”}。若成功获取鉴权信息，便可以进行下一步接口请求。若没有获取到鉴权信息，请检查以下条件是否都满足：a.是否已联系销售专员。b.发布时，开启语音交互功能。c.websocket是否连接成功

### 2.接口请求

后台有两个POST请求接口。一个生成接口，一个更新接口。

##### 2.1生成接口：

#####  "https://app.3dcat.live/api/3dcat/application/agora/generate"

**生成接口请求参数**（channel为频道名，可以来自用户输入，或者使用预定义的房间名）：

```json
{
    "channel":"",
    "serviceVerify":""
}
```

**返回示例**：

```json
{
	"version": "1.0.0",
	"result": true,
	"message": "success",
	"code": 200,
	"data": {
		"account": "1611267243147137024",
		"token": "007eJxTYHg/+1Kd/r2Iwuq/9o9ffv8xSehZtXmIeId101fVelW/7WoKDEbJZsYWaZbmRmbGpiamKcZJJmnJJslJhpYGSUYWxqmpuhe3JzcEMjK8fH3sBSMDIwMLEIP4TGCSGUyyQNnGJibCDIZmhoZGZuZGJsaGJuaGxuYGRiYALO8oEg=="
	},
	"serverTime": 1672991022001,
	"requestId": "d703c811b1105e18"
}
```

##### 2.2更新接口：

##### "https://app.3dcat.live/api/3dcat/application/agora/reset"

**更新接口请求参数**：

```json
{
    "account":"",
    "channel":"",
    "serviceVerify":""
}
```

**返回示例**：

```json
{
	"version": "1.0.0",
	"result": true,
	"message": "success",
	"code": 200,
	"data": {
		"account": "1611267243147137024",
		"token": "007eJxTYMjbFrBlteLRGxMfVq3a9zXz04bLbWo77WMMvK4us92alfdOgcEo2czYIs3S3MjM2NTENMU4ySQt2SQ5ydDSIMnIwjg1tfvi9uSGQEYGx11VBowMjAwsQAziM4FJZjDJAmUbm5gIMxiaGRoamZkbmRgbmpgbGpsbGJkAAGspKAE="
	},
	"serverTime": 1672991115934,
	"requestId": "5055c2e1dca02015"
}
```

初次使用时，请使用生成接口，接口所返回的token信息有效期为24小时，建议将token、account和获取时间保存到本地，下次启动时先核验是否过期，如果已过期则调用更新接口。serviceVerify无需保存，每次启动服务端都会发送新的值。

### 3.加入频道，连接通话

1.构建IRtcEngineEventHandler对象处理回调信息

2.构建AgoraRtcEngine对象加入频道

3.APP ID固定不变，请勿修改；channelName为要加入的频道名，后续可以给他人 用以加入频道。

