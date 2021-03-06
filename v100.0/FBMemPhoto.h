/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBWildeMemModelObject.h>
#import <Messenger/FBRichStoryEntityMediaProtocol.h>
#import <Messenger/FBDisplayableMedia.h>
#import <Messenger/FBFeedbackTargetProtocol.h>
#import <Messenger/FBSearchPivotsSource.h>
#import <Messenger/FBShareable.h>
#import <Messenger/FBQueriedEntityFieldsProtocol.h>
#import <Messenger/FBQueriedGoodwillThrowbackAccentImageFieldsProtocol.h>
#import <Messenger/FBQueriedMediaFieldsProtocol.h>
#import <Messenger/FBQueriedNodeFieldsProtocol.h>
#import <Messenger/FBQueriedProfileOverlayableMediaFieldsProtocol.h>
#import <Messenger/FBQueriedSearchCombinedResultFieldsProtocol.h>
#import <Messenger/FBQueriedSearchResultFieldsProtocol.h>

@class NSString;

@interface FBMemPhoto : FBWildeMemModelObject <FBRichStoryEntityMediaProtocol, FBDisplayableMedia, FBFeedbackTargetProtocol, FBSearchPivotsSource, FBShareable, FBQueriedEntityFieldsProtocol, FBQueriedGoodwillThrowbackAccentImageFieldsProtocol, FBQueriedMediaFieldsProtocol, FBQueriedNodeFieldsProtocol, FBQueriedProfileOverlayableMediaFieldsProtocol, FBQueriedSearchCombinedResultFieldsProtocol, FBQueriedSearchResultFieldsProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)supportedImageFlags;
-(id)shareableID;
-(id)shareableURL;
-(void)taggableSourceAvatarWithSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isFullInfoLoaded;
-(id)mediaID;
-(id)mediaID;
-(id)imageSourceForFlag:(unsigned long long)arg1 ;
-(unsigned long long)imageFlagClosestToFlag:(unsigned long long)arg1 ;
-(id)cubestripEncodingForSize:(unsigned long long)arg1 ;
-(id)supportedImageURLs;
-(id)faceBoxesArray;
-(BOOL)hasCubestripEncodings;
-(id)imageForFlag:(unsigned long long)arg1 ;
-(CGSize)imageSizeForFlag:(unsigned long long)arg1 ;
-(unsigned long long)imageFlagClosestToSize:(double)arg1 ;
-(id)shareableType;
-(id)shareableText;
-(id)shareableTitle;
-(id)shareableSubtitle;
-(id)shareableDescription;
-(id)shareableImageURL;
-(id)shareableImage;
-(id)entityURL;
-(id)defaultPhotoTitle;
-(id)default360PhotoTitle;
-(id)accessibilityLabelStringWithTitle:(id)arg1 includingCaption:(BOOL)arg2 ;
-(id)accessibilityLabelString;
-(id)imageClosestToFlag:(unsigned long long)arg1 ;
-(CGSize)size;
-(id)place;
-(BOOL)isDisplayable;
-(double)aspectRatio;
-(CGPoint)focusPoint;
@end

