/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:02 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAutoupdaterDownloader <NSObject>
@required
+(id)new;
-(void)download:(id)arg1 toPath:(id)arg2;
-(id)init;
-(void)cancel;
-(void)setDelegate:(id)arg1;
-(id)url;
-(void)suspend;
-(id)initWithDelegate:(id)arg1;
-(void)resume;
-(id)progress;

@end

