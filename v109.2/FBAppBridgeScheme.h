/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:43 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBAppBridgeScheme : NSObject {

	NSString* _version;

}

@property (nonatomic,copy) NSString * version;              //@synthesize version=_version - In the implementation block
+(id)_validAppBridgeSchemeForMethod:(id)arg1 minVersion:(id)arg2 ;
+(id)_URLForMethod:(id)arg1 queryParams:(id)arg2 schemeVersion:(id)arg3 version:(id)arg4 ;
+(id)_validAppBridgeSchemeWithConfig:(id)arg1 forMethod:(id)arg2 ;
+(id)_installedAppBridgeSchemeForMethod:(id)arg1 minVersion:(id)arg2 ;
+(id)bridgeSchemeForFBAppForShareDialogParams:(id)arg1 ;
+(id)bridgeSchemeForFBAppForShareDialogPhotos;
+(id)bridgeSchemeForFBAppForOpenGraphActionShareDialogParams:(id)arg1 ;
+(id)bridgeSchemeForFBMessengerForShareDialogParams:(id)arg1 ;
+(id)bridgeSchemeForFBMessengerForOpenGraphActionShareDialogParams:(id)arg1 ;
+(id)bridgeSchemeForFBMessengerForShareDialogPhotos;
+(id)bridgeSchemeForFBAppForLike;
+(BOOL)isSupportedScheme:(id)arg1 ;
+(id)schemePrefix;
+(id)bridgeVersions;
+(void)updateDialogConfigs;
+(void)initialize;
-(id)URLForMethod:(id)arg1 queryParams:(id)arg2 ;
-(void)dealloc;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(id)initWithVersion:(id)arg1 ;
@end

