/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSNumber;

@interface FBProfileIntroCardMediaCollageLayout : FBGraphQLInput {

	NSNumber* _x;
	NSNumber* _y;
	NSNumber* _width;
	NSNumber* _height;

}

@property (x,nonatomic,copy) NSNumber * x;                 //@synthesize x=_x - In the implementation block
@property (y,nonatomic,copy) NSNumber * y;                 //@synthesize y=_y - In the implementation block
@property (nonatomic,copy) NSNumber * width;               //@synthesize width=_width - In the implementation block
@property (nonatomic,copy) NSNumber * height;              //@synthesize height=_height - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSNumber *)width;
-(NSNumber *)height;
-(NSNumber *)x;
-(void)setX:(NSNumber *)arg1 ;
-(NSNumber *)y;
-(void)setY:(NSNumber *)arg1 ;
-(void)setWidth:(NSNumber *)arg1 ;
-(void)setHeight:(NSNumber *)arg1 ;
@end

