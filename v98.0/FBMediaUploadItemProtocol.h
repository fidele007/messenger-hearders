/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UIImage, FBComposerPublisherData;


@protocol FBMediaUploadItemProtocol <NSObject>
@property (assign,nonatomic,__weak) id<FBMediaUploadItemDelegate> delegate; 
@property (nonatomic,copy,readonly) NSString * attachmentID; 
@property (assign,nonatomic) int priorityStatus; 
@property (nonatomic,readonly) unsigned long long uploadQuality; 
@property (assign,nonatomic) long long state; 
@property (nonatomic,copy,readonly) NSString * mediaFBID; 
@property (nonatomic,readonly) int mediaUploadItemType; 
@property (nonatomic,readonly) UIImage * thumbnailImage; 
@property (nonatomic,retain) FBComposerPublisherData * publisherData; 
@property (assign,nonatomic) double uploadSuccessTime; 
@property (nonatomic,copy,readonly) NSString * uploadSessionID; 
@property (nonatomic,readonly) double progress; 
@required
-(void)setPublisherData:(id)arg1;
-(FBComposerPublisherData *)publisherData;
-(NSString *)mediaFBID;
-(BOOL)requiresReuploadWhenReplacedByMediaUploadItem:(id)arg1;
-(int)priorityStatus;
-(void)setPriorityStatus:(int)arg1;
-(unsigned long long)uploadQuality;
-(int)mediaUploadItemType;
-(double)uploadSuccessTime;
-(void)setUploadSuccessTime:(double)arg1;
-(NSString *)uploadSessionID;
-(void)cancel;
-(void)setDelegate:(id)arg1;
-(id<FBMediaUploadItemDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1;
-(void)start;
-(double)progress;
-(UIImage *)thumbnailImage;
-(NSString *)attachmentID;

@end

