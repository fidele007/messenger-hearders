/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/RCTViewManager.h>

@interface RCTImageViewManager : RCTViewManager
+(id)moduleName;
+(id)propConfig_blurRadius;
+(id)propConfig_capInsets;
+(id)propConfig_defaultSource;
+(id)propConfig_onLoadStart;
+(id)propConfig_onProgress;
+(id)propConfig_onError;
+(id)propConfig_onPartialLoad;
+(id)propConfig_onLoad;
+(id)propConfig_onLoadEnd;
+(id)propConfig_resizeMode;
+(id)propConfig_source;
+(id)propConfig_tintColor;
+(id)__rct_export__510;
+(id)__rct_export__651;
+(void)load;
-(void)set_tintColor:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(void)getSize:(id)arg1 successBlock:(/*^block*/id)arg2 errorBlock:(/*^block*/id)arg3 ;
-(void)prefetchImage:(id)arg1 resolve:(/*^block*/id)arg2 reject:(/*^block*/id)arg3 ;
-(id)view;
@end
