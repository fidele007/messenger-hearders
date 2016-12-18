/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBWebRTCVideoExpressionExperimentContext : FBExperimentContext {

	BOOL _enabled;
	BOOL _hasMsqrd;
	BOOL _hasEntryForVch;
	BOOL _useGraphicsEngine;
	unsigned long long _predownloadType;
	unsigned long long _masksVersion;
	unsigned long long _engineVersion;

}

@property (nonatomic,readonly) BOOL enabled;                                    //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) BOOL hasMsqrd;                                   //@synthesize hasMsqrd=_hasMsqrd - In the implementation block
@property (nonatomic,readonly) BOOL hasEntryForVch;                             //@synthesize hasEntryForVch=_hasEntryForVch - In the implementation block
@property (nonatomic,readonly) unsigned long long predownloadType;              //@synthesize predownloadType=_predownloadType - In the implementation block
@property (nonatomic,readonly) unsigned long long masksVersion;                 //@synthesize masksVersion=_masksVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long engineVersion;                //@synthesize engineVersion=_engineVersion - In the implementation block
@property (nonatomic,readonly) BOOL useGraphicsEngine;                          //@synthesize useGraphicsEngine=_useGraphicsEngine - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(BOOL)hasEntryForVch;
-(unsigned long long)predownloadType;
-(BOOL)useGraphicsEngine;
-(unsigned long long)masksVersion;
-(BOOL)hasMsqrd;
-(unsigned long long)engineVersion;
-(BOOL)enabled;
@end

