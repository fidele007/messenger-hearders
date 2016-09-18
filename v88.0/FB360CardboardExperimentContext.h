/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FB360CardboardExperimentContext : FBExperimentContext {

	BOOL _enabledInVideo;
	BOOL _enabledInPhoto;
	BOOL _enabledTestRenderer;

}

@property (nonatomic,readonly) BOOL enabledInVideo;                   //@synthesize enabledInVideo=_enabledInVideo - In the implementation block
@property (nonatomic,readonly) BOOL enabledInPhoto;                   //@synthesize enabledInPhoto=_enabledInPhoto - In the implementation block
@property (nonatomic,readonly) BOOL enabledTestRenderer;              //@synthesize enabledTestRenderer=_enabledTestRenderer - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(BOOL)enabledTestRenderer;
-(BOOL)enabledInVideo;
-(BOOL)enabledInPhoto;
@end

