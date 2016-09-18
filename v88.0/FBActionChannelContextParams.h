/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSArray;

@interface FBActionChannelContextParams : FBGraphQLInput {

	NSString* _supportedActionsHash;
	NSArray* _supportedActions;
	NSString* _showAll;
	NSString* _adminPreview;
	NSString* _tabActionType;
	NSString* _isDeeplink;

}

@property (nonatomic,copy) NSString * supportedActionsHash;              //@synthesize supportedActionsHash=_supportedActionsHash - In the implementation block
@property (nonatomic,copy) NSArray * supportedActions;                   //@synthesize supportedActions=_supportedActions - In the implementation block
@property (nonatomic,copy) NSString * showAll;                           //@synthesize showAll=_showAll - In the implementation block
@property (nonatomic,copy) NSString * adminPreview;                      //@synthesize adminPreview=_adminPreview - In the implementation block
@property (nonatomic,copy) NSString * tabActionType;                     //@synthesize tabActionType=_tabActionType - In the implementation block
@property (nonatomic,copy) NSString * isDeeplink;                        //@synthesize isDeeplink=_isDeeplink - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)supportedActionsHash;
-(void)setSupportedActionsHash:(NSString *)arg1 ;
-(NSArray *)supportedActions;
-(void)setSupportedActions:(NSArray *)arg1 ;
-(NSString *)adminPreview;
-(void)setAdminPreview:(NSString *)arg1 ;
-(NSString *)tabActionType;
-(void)setTabActionType:(NSString *)arg1 ;
-(NSString *)isDeeplink;
-(void)setIsDeeplink:(NSString *)arg1 ;
-(NSString *)showAll;
-(void)setShowAll:(NSString *)arg1 ;
@end

