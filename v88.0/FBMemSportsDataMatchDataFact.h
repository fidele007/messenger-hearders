/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:01 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWildeMemModelObject.h>
#import <Messenger/FBFeedbackTargetProtocol.h>
#import <Messenger/FBShareable.h>
#import <Messenger/FBQueriedNodeFieldsProtocol.h>
#import <Messenger/FBQueriedEntityFieldsProtocol.h>

@class NSString;

@interface FBMemSportsDataMatchDataFact : FBWildeMemModelObject <FBFeedbackTargetProtocol, FBShareable, FBQueriedNodeFieldsProtocol, FBQueriedEntityFieldsProtocol>

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
-(id)shareableQuote;
@end

