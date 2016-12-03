/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSURL, NSString, UIImage, FBCompositionLinkSharePreview;

@interface FBCompositionLinkShare : FBValueObject <NSCopying, NSCoding> {

	BOOL _isLinkURLOverridden;
	BOOL _isImageURLOverridden;
	BOOL _isTitleOverridden;
	BOOL _isShareDescriptionOverridden;
	BOOL _isCaptionOverridden;
	BOOL _forceDisplay;
	BOOL _isLoaded;
	BOOL _isEditable;
	BOOL _isDisabled;
	BOOL _hideSeparator;
	BOOL _correspondsToVideoBroadcast;
	BOOL _isFromOriginalStory;
	NSURL* _linkURL;
	NSString* _linkText;
	NSURL* _imageURL;
	UIImage* _image;
	NSString* _title;
	NSString* _shareDescription;
	NSString* _caption;
	NSString* _objectID;
	NSString* _shareableType;
	NSString* _quote;
	NSString* _originalPostOwnerName;
	NSString* _originalPostMessage;
	FBCompositionLinkSharePreview* _preview;
	CGSize _imageSize;

}

@property (nonatomic,copy,readonly) NSURL * linkURL;                                      //@synthesize linkURL=_linkURL - In the implementation block
@property (nonatomic,readonly) BOOL isLinkURLOverridden;                                  //@synthesize isLinkURLOverridden=_isLinkURLOverridden - In the implementation block
@property (nonatomic,copy,readonly) NSString * linkText;                                  //@synthesize linkText=_linkText - In the implementation block
@property (nonatomic,copy,readonly) NSURL * imageURL;                                     //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,readonly) BOOL isImageURLOverridden;                                 //@synthesize isImageURLOverridden=_isImageURLOverridden - In the implementation block
@property (nonatomic,copy,readonly) UIImage * image;                                      //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) CGSize imageSize;                                          //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL isTitleOverridden;                                    //@synthesize isTitleOverridden=_isTitleOverridden - In the implementation block
@property (nonatomic,copy,readonly) NSString * shareDescription;                          //@synthesize shareDescription=_shareDescription - In the implementation block
@property (nonatomic,readonly) BOOL isShareDescriptionOverridden;                         //@synthesize isShareDescriptionOverridden=_isShareDescriptionOverridden - In the implementation block
@property (nonatomic,copy,readonly) NSString * caption;                                   //@synthesize caption=_caption - In the implementation block
@property (nonatomic,readonly) BOOL isCaptionOverridden;                                  //@synthesize isCaptionOverridden=_isCaptionOverridden - In the implementation block
@property (nonatomic,copy,readonly) NSString * objectID;                                  //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) BOOL forceDisplay;                                         //@synthesize forceDisplay=_forceDisplay - In the implementation block
@property (nonatomic,copy,readonly) NSString * shareableType;                             //@synthesize shareableType=_shareableType - In the implementation block
@property (nonatomic,readonly) BOOL isLoaded;                                             //@synthesize isLoaded=_isLoaded - In the implementation block
@property (nonatomic,readonly) BOOL isEditable;                                           //@synthesize isEditable=_isEditable - In the implementation block
@property (nonatomic,readonly) BOOL isDisabled;                                           //@synthesize isDisabled=_isDisabled - In the implementation block
@property (nonatomic,readonly) BOOL hideSeparator;                                        //@synthesize hideSeparator=_hideSeparator - In the implementation block
@property (nonatomic,copy,readonly) NSString * quote;                                     //@synthesize quote=_quote - In the implementation block
@property (nonatomic,copy,readonly) NSString * originalPostOwnerName;                     //@synthesize originalPostOwnerName=_originalPostOwnerName - In the implementation block
@property (nonatomic,copy,readonly) NSString * originalPostMessage;                       //@synthesize originalPostMessage=_originalPostMessage - In the implementation block
@property (nonatomic,readonly) BOOL correspondsToVideoBroadcast;                          //@synthesize correspondsToVideoBroadcast=_correspondsToVideoBroadcast - In the implementation block
@property (nonatomic,readonly) BOOL isFromOriginalStory;                                  //@synthesize isFromOriginalStory=_isFromOriginalStory - In the implementation block
@property (nonatomic,copy,readonly) FBCompositionLinkSharePreview * preview;              //@synthesize preview=_preview - In the implementation block
-(NSString *)shareableType;
-(BOOL)isFromOriginalStory;
-(id)initWithLinkURL:(id)arg1 isLinkURLOverridden:(BOOL)arg2 linkText:(id)arg3 imageURL:(id)arg4 isImageURLOverridden:(BOOL)arg5 image:(id)arg6 imageSize:(CGSize)arg7 title:(id)arg8 isTitleOverridden:(BOOL)arg9 shareDescription:(id)arg10 isShareDescriptionOverridden:(BOOL)arg11 caption:(id)arg12 isCaptionOverridden:(BOOL)arg13 objectID:(id)arg14 forceDisplay:(BOOL)arg15 shareableType:(id)arg16 isLoaded:(BOOL)arg17 isEditable:(BOOL)arg18 isDisabled:(BOOL)arg19 hideSeparator:(BOOL)arg20 quote:(id)arg21 originalPostOwnerName:(id)arg22 originalPostMessage:(id)arg23 correspondsToVideoBroadcast:(BOOL)arg24 isFromOriginalStory:(BOOL)arg25 preview:(id)arg26 ;
-(BOOL)isLinkURLOverridden;
-(BOOL)isImageURLOverridden;
-(BOOL)isTitleOverridden;
-(BOOL)isShareDescriptionOverridden;
-(BOOL)isCaptionOverridden;
-(BOOL)forceDisplay;
-(BOOL)hideSeparator;
-(NSString *)originalPostOwnerName;
-(NSString *)originalPostMessage;
-(BOOL)correspondsToVideoBroadcast;
-(NSString *)title;
-(BOOL)isEditable;
-(UIImage *)image;
-(CGSize)imageSize;
-(BOOL)isLoaded;
-(NSString *)caption;
-(NSString *)linkText;
-(NSURL *)linkURL;
-(NSURL *)imageURL;
-(BOOL)isDisabled;
-(NSString *)objectID;
-(NSString *)quote;
-(FBCompositionLinkSharePreview *)preview;
-(NSString *)shareDescription;
@end
