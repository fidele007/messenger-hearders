/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface RCTBundleURLProvider : NSObject

@property (nonatomic,copy) NSString * jsLocation; 
@property (assign,nonatomic) BOOL enableLiveReload; 
@property (assign,nonatomic) BOOL enableMinification; 
@property (assign,nonatomic) BOOL enableDev; 
+(id)resourceURLForResourcePath:(id)arg1 packagerHost:(id)arg2 query:(id)arg3 ;
+(id)jsBundleURLForBundleRoot:(id)arg1 packagerHost:(id)arg2 enableDev:(BOOL)arg3 enableMinification:(BOOL)arg4 ;
+(id)sharedSettings;
-(id)jsBundleURLForBundleRoot:(id)arg1 fallbackResource:(id)arg2 ;
-(void)settingsUpdated;
-(NSString *)jsLocation;
-(id)packagerServerHost;
-(BOOL)enableDev;
-(BOOL)enableMinification;
-(void)updateValue:(id)arg1 forKey:(id)arg2 ;
-(id)packagerServerURL;
-(id)resourceURLForResourceRoot:(id)arg1 resourceName:(id)arg2 resourceExtension:(id)arg3 offlineBundle:(id)arg4 ;
-(BOOL)enableLiveReload;
-(void)setEnableDev:(BOOL)arg1 ;
-(void)setEnableLiveReload:(BOOL)arg1 ;
-(void)setJsLocation:(NSString *)arg1 ;
-(void)setEnableMinification:(BOOL)arg1 ;
-(id)init;
-(void)resetToDefaults;
-(void)setDefaults;
-(id)defaults;
@end

