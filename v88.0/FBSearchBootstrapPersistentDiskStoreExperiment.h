/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBSearchBootstrapPersistentDiskStoreExperiment : FBExperimentContext {

	BOOL _useLegacyStoreInterface;
	BOOL _useDiskCacheConfig;

}

@property (assign,nonatomic) BOOL useLegacyStoreInterface;              //@synthesize useLegacyStoreInterface=_useLegacyStoreInterface - In the implementation block
@property (assign,nonatomic) BOOL useDiskCacheConfig;                   //@synthesize useDiskCacheConfig=_useDiskCacheConfig - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(BOOL)useLegacyStoreInterface;
-(void)setUseLegacyStoreInterface:(BOOL)arg1 ;
-(BOOL)useDiskCacheConfig;
-(void)setUseDiskCacheConfig:(BOOL)arg1 ;
@end
