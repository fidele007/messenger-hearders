/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBWebImageNetworkDownloadInfo : NSObject {

	id _downloadToken;
	/*^block*/id _downloadBlock;

}

@property (nonatomic,retain) id downloadToken;              //@synthesize downloadToken=_downloadToken - In the implementation block
@property (nonatomic,copy) id downloadBlock;                //@synthesize downloadBlock=_downloadBlock - In the implementation block
-(id)initWithDownloadBlock:(/*^block*/id)arg1 ;
-(id)downloadBlock;
-(void)setDownloadBlock:(id)arg1 ;
-(void)setDownloadToken:(id)arg1 ;
-(id)downloadToken;
@end
