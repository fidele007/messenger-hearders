/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNAdaptiveImageDownloaderConfiguration;

@interface MNAdaptiveImageDownloadRequest : NSObject {

	MNAdaptiveImageDownloaderConfiguration* _configuration;
	id _download;

}

@property (nonatomic,copy) MNAdaptiveImageDownloaderConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (retain) id download;                                                                 //@synthesize download=_download - In the implementation block
-(void)setConfiguration:(MNAdaptiveImageDownloaderConfiguration *)arg1 ;
-(MNAdaptiveImageDownloaderConfiguration *)configuration;
-(id)download;
-(void)setDownload:(id)arg1 ;
@end
