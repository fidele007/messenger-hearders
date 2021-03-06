/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSNumber;

@interface FBGraphSearchSource : FBGraphQLInput {

	NSString* _source;
	NSNumber* _size;

}

@property (nonatomic,copy) NSString * source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSNumber * size;                //@synthesize size=_size - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSNumber *)size;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(void)setSize:(NSNumber *)arg1 ;
@end

