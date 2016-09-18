/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSURL, NSArray, FBMultiPickerVideoAttachment;

@interface FBComposerStorylineAttachment : FBValueObject <NSCopying, NSCoding> {

	BOOL _embedPlayerInComposerView;
	BOOL _showEditButtonInComposer;
	NSString* _title;
	NSURL* _localCoverPhotoAssetURL;
	NSURL* _localCoverPhotoGroupURL;
	unsigned long long _localCoverPhotoIndexHint;
	NSString* _remoteCoverPhotoURI;
	NSString* _uniqueCollectionID;
	NSString* _storylinePayload;
	NSArray* _photoAttachments;
	FBMultiPickerVideoAttachment* _videoAttachment;
	NSString* _defaultMoodID;

}

@property (nonatomic,copy,readonly) NSString * title;                                            //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSURL * localCoverPhotoAssetURL;                             //@synthesize localCoverPhotoAssetURL=_localCoverPhotoAssetURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * localCoverPhotoGroupURL;                             //@synthesize localCoverPhotoGroupURL=_localCoverPhotoGroupURL - In the implementation block
@property (nonatomic,readonly) unsigned long long localCoverPhotoIndexHint;                      //@synthesize localCoverPhotoIndexHint=_localCoverPhotoIndexHint - In the implementation block
@property (nonatomic,copy,readonly) NSString * remoteCoverPhotoURI;                              //@synthesize remoteCoverPhotoURI=_remoteCoverPhotoURI - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueCollectionID;                               //@synthesize uniqueCollectionID=_uniqueCollectionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * storylinePayload;                                 //@synthesize storylinePayload=_storylinePayload - In the implementation block
@property (nonatomic,copy,readonly) NSArray * photoAttachments;                                  //@synthesize photoAttachments=_photoAttachments - In the implementation block
@property (nonatomic,copy,readonly) FBMultiPickerVideoAttachment * videoAttachment;              //@synthesize videoAttachment=_videoAttachment - In the implementation block
@property (nonatomic,readonly) BOOL embedPlayerInComposerView;                                   //@synthesize embedPlayerInComposerView=_embedPlayerInComposerView - In the implementation block
@property (nonatomic,copy,readonly) NSString * defaultMoodID;                                    //@synthesize defaultMoodID=_defaultMoodID - In the implementation block
@property (nonatomic,readonly) BOOL showEditButtonInComposer;                                    //@synthesize showEditButtonInComposer=_showEditButtonInComposer - In the implementation block
-(FBMultiPickerVideoAttachment *)videoAttachment;
-(NSArray *)photoAttachments;
-(NSString *)uniqueCollectionID;
-(id)initWithTitle:(id)arg1 localCoverPhotoAssetURL:(id)arg2 localCoverPhotoGroupURL:(id)arg3 localCoverPhotoIndexHint:(unsigned long long)arg4 remoteCoverPhotoURI:(id)arg5 uniqueCollectionID:(id)arg6 storylinePayload:(id)arg7 photoAttachments:(id)arg8 videoAttachment:(id)arg9 embedPlayerInComposerView:(BOOL)arg10 defaultMoodID:(id)arg11 showEditButtonInComposer:(BOOL)arg12 ;
-(NSURL *)localCoverPhotoAssetURL;
-(NSURL *)localCoverPhotoGroupURL;
-(unsigned long long)localCoverPhotoIndexHint;
-(NSString *)remoteCoverPhotoURI;
-(NSString *)storylinePayload;
-(BOOL)embedPlayerInComposerView;
-(NSString *)defaultMoodID;
-(BOOL)showEditButtonInComposer;
-(NSString *)title;
@end

