/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWildeMemModelObject.h>
#import <Messenger/FBShareable.h>
#import <Messenger/FBFeedbackTargetProtocol.h>
#import <Messenger/FBQueriedEntityFieldsProtocol.h>
#import <Messenger/FBQueriedNodeFieldsProtocol.h>
#import <Messenger/FBQueriedProfileFieldsProtocol.h>
#import <Messenger/FBQueriedSavableFieldsProtocol.h>
#import <Messenger/FBQueriedSearchCombinedResultFieldsProtocol.h>
#import <Messenger/FBQueriedSearchResultFieldsProtocol.h>

@class NSString;

@interface FBMemProductItem : FBWildeMemModelObject <FBShareable, FBFeedbackTargetProtocol, FBQueriedEntityFieldsProtocol, FBQueriedNodeFieldsProtocol, FBQueriedProfileFieldsProtocol, FBQueriedSavableFieldsProtocol, FBQueriedSearchCombinedResultFieldsProtocol, FBQueriedSearchResultFieldsProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)shareableID;
-(id)shareableURL;
-(void)taggableSourceAvatarWithSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)shareableType;
-(id)shareableText;
-(id)shareableTitle;
-(id)shareableSubtitle;
-(id)shareableDescription;
-(id)shareableImageURL;
-(id)shareableImage;
-(BOOL)isShareableURLOverwritten;
@end

