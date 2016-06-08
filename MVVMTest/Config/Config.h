//
//  Config.h
//  MVVMTest
//
//  Created by 李泽鲁 on 15/1/6.
//  Copyright (c) 2015年 李泽鲁. All rights reserved.
//

#ifndef MVVMTest_Config_h
#define MVVMTest_Config_h

//定义返回请求数据的block类型
typedef void (^ReturnValueBlock) (id returnValue);
typedef void (^ErrorCodeBlock) (id errorCode);
typedef void (^FailureBlock)();
typedef void (^NetWorkBlock)(BOOL netConnetState);

#define DDLog(xx, ...)  NSLog(@"%s(%d): " xx, __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)

//accessToken
#define ACCESSTOKEN @"2.00NofgBD0L1k4pc584f79cc48SKGdD"

//请求公共微博的网络接口
#define REQUESTPUBLICURL @"https://api.weibo.com/2/statuses/public_timeline.json"

#define SOURCE       @"source"
#define TOKEN        @"access_token"
#define COUNT        @"count"

#define STATUSES     @"statuses"
#define CREATETIME   @"created_at"
#define WEIBOID      @"id"
#define WEIBOTEXT    @"text"
#define USER         @"user"
#define UID          @"id"
#define HEADIMAGEURL @"profile_image_url"
#define USERNAME     @"screen_name"


//控制台颜色输出
#define XCODE_COLORS_ESCAPE @"\033["
#define XCODE_COLORS_RESET_FG XCODE_COLORS_ESCAPE @"fg;"
#define XCODE_COLORS_RESET_BG XCODE_COLORS_ESCAPE @"bg;"
#define XCODE_COLORS_RESET XCODE_COLORS_ESCAPE @";"
#define LogBlue(frmt, ...) NSLog((XCODE_COLORS_ESCAPE @"fg0,0,255;" frmt XCODE_COLORS_RESET), ##__VA_ARGS__)
#define LogRed(frmt, ...) NSLog((XCODE_COLORS_ESCAPE @"fg255,0,0;" frmt XCODE_COLORS_RESET), ##__VA_ARGS__)
#define LogPurpe(frmt, ...) NSLog((XCODE_COLORS_ESCAPE @"fg160,32,240;" frmt XCODE_COLORS_RESET), ##__VA_ARGS__)
#define LogOrange(frmt, ...) NSLog((XCODE_COLORS_ESCAPE @"fg255,127,36;" frmt XCODE_COLORS_RESET), ##__VA_ARGS__)
#define LogGreen(frmt, ...) NSLog((XCODE_COLORS_ESCAPE @"fg0,255,0;" frmt XCODE_COLORS_RESET), ##__VA_ARGS__)



#endif
