/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSNumber;

@interface FBCartField : FBGraphQLInput {

	NSString* _graphQLID;
	NSNumber* _qty;

}

@property (nonatomic,copy) NSString * graphQLID;              //@synthesize graphQLID=_graphQLID - In the implementation block
@property (nonatomic,copy) NSNumber * qty;                    //@synthesize qty=_qty - In the implementation block
-(NSString *)graphQLID;
-(void)setGraphQLID:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSNumber *)qty;
-(void)setQty:(NSNumber *)arg1 ;
@end
