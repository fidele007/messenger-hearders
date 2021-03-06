/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBExperimentContext.h>

@interface FBWebRTCMultiwayIsacExperimentContext : FBExperimentContext {

	int _use_adaptive_isac;
	int _bitrate_override;
	int _use_ispx;

}

@property (nonatomic,readonly) int use_adaptive_isac;              //@synthesize use_adaptive_isac=_use_adaptive_isac - In the implementation block
@property (nonatomic,readonly) int bitrate_override;               //@synthesize bitrate_override=_bitrate_override - In the implementation block
@property (nonatomic,readonly) int use_ispx;                       //@synthesize use_ispx=_use_ispx - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(int)use_adaptive_isac;
-(int)bitrate_override;
-(int)use_ispx;
@end

