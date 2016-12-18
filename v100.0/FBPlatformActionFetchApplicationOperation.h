/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPlatformActionOperation.h>

@class NSString, FBPlatformApplicationGraphQLDownloadRequest;

@interface FBPlatformActionFetchApplicationOperation : FBPlatformActionOperation {

	NSString* _appName;
	FBPlatformApplicationGraphQLDownloadRequest* _applicationRequest;

}

@property (nonatomic,retain) FBPlatformApplicationGraphQLDownloadRequest * applicationRequest;              //@synthesize applicationRequest=_applicationRequest - In the implementation block
@property (nonatomic,copy,readonly) NSString * appName;                                                     //@synthesize appName=_appName - In the implementation block
-(void)_cancelApplicationRequest;
-(FBPlatformApplicationGraphQLDownloadRequest *)applicationRequest;
-(void)setApplicationRequest:(FBPlatformApplicationGraphQLDownloadRequest *)arg1 ;
-(id)defaultErrorMessage;
-(void)cancel;
-(void)cleanup;
-(id)initWithAction:(id)arg1 ;
-(NSString *)appName;
-(void)process;
@end
