/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSArray, NSString;

@interface FBNotifOptionSetContextQueryParams : FBGraphQLInput {

	NSArray* _supportedDisplayStyles;
	NSArray* _clientActionTypes;
	NSString* _pushEnabled;

}

@property (nonatomic,copy) NSArray * supportedDisplayStyles;              //@synthesize supportedDisplayStyles=_supportedDisplayStyles - In the implementation block
@property (nonatomic,copy) NSArray * clientActionTypes;                   //@synthesize clientActionTypes=_clientActionTypes - In the implementation block
@property (nonatomic,copy) NSString * pushEnabled;                        //@synthesize pushEnabled=_pushEnabled - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSArray *)supportedDisplayStyles;
-(void)setSupportedDisplayStyles:(NSArray *)arg1 ;
-(NSArray *)clientActionTypes;
-(void)setClientActionTypes:(NSArray *)arg1 ;
-(void)setPushEnabled:(NSString *)arg1 ;
-(NSString *)pushEnabled;
@end

