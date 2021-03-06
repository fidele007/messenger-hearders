/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FBGraphQLPagedDownloading <NSObject,FBGraphQLPagedDownloadingAnnouncingInterface>
@property (nonatomic,copy,readonly) NSString * targetID; 
@property (assign,nonatomic) BOOL enabled; 
@property (nonatomic,readonly) id<FBGraphQLConnectionInterface> connection; 
@required
-(id)analytics;
-(void)loadTail;
-(BOOL)loadingHead;
-(id)lastHeadLoadError;
-(id)lastTailLoadError;
-(void)loadHeadWithRefreshMode:(id)arg1 caller:(id)arg2;
-(BOOL)loadingInitial;
-(BOOL)loadingTail;
-(BOOL)canLoadTail;
-(void)startStreaming;
-(void)_cancelRequestsAndResetLoadState;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1;
-(id<FBGraphQLConnectionInterface>)connection;
-(NSString *)targetID;

@end

