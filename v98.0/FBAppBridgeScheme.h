/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBAppBridgeScheme : NSObject {

	NSString* _version;

}

@property (nonatomic,copy) NSString * version;              //@synthesize version=_version - In the implementation block
+(void)updateDialogConfigs;
+(BOOL)isSupportedScheme:(id)arg1 ;
+(id)_validAppBridgeSchemeForMethod:(id)arg1 minVersion:(id)arg2 ;
+(id)schemePrefix;
+(id)_URLForMethod:(id)arg1 queryParams:(id)arg2 schemeVersion:(id)arg3 version:(id)arg4 ;
+(id)bridgeVersions;
+(id)_validAppBridgeSchemeWithConfig:(id)arg1 forMethod:(id)arg2 ;
+(id)_installedAppBridgeSchemeForMethod:(id)arg1 minVersion:(id)arg2 ;
+(id)bridgeSchemeForFBAppForShareDialogParams:(id)arg1 ;
+(id)bridgeSchemeForFBAppForShareDialogPhotos;
+(id)bridgeSchemeForFBAppForOpenGraphActionShareDialogParams:(id)arg1 ;
+(id)bridgeSchemeForFBAppForLike;
+(id)bridgeSchemeForFBMessengerForShareDialogParams:(id)arg1 ;
+(id)bridgeSchemeForFBMessengerForShareDialogPhotos;
+(id)bridgeSchemeForFBMessengerForOpenGraphActionShareDialogParams:(id)arg1 ;
+(void)initialize;
-(id)URLForMethod:(id)arg1 queryParams:(id)arg2 ;
-(void)dealloc;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(id)initWithVersion:(id)arg1 ;
@end
