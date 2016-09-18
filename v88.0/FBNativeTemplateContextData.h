/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSArray, NSString, NSNumber, FBLatLong;

@interface FBNativeTemplateContextData : FBGraphQLInput {

	NSArray* _styles;
	NSString* _stylesId;
	NSNumber* _pixelRatio;
	FBLatLong* _location;
	NSString* _timezone;

}

@property (nonatomic,copy) NSArray * styles;                   //@synthesize styles=_styles - In the implementation block
@property (nonatomic,copy) NSString * stylesId;                //@synthesize stylesId=_stylesId - In the implementation block
@property (nonatomic,copy) NSNumber * pixelRatio;              //@synthesize pixelRatio=_pixelRatio - In the implementation block
@property (nonatomic,copy) FBLatLong * location;               //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * timezone;                //@synthesize timezone=_timezone - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setStyles:(NSArray *)arg1 ;
-(NSString *)stylesId;
-(void)setStylesId:(NSString *)arg1 ;
-(NSNumber *)pixelRatio;
-(void)setPixelRatio:(NSNumber *)arg1 ;
-(FBLatLong *)location;
-(void)setLocation:(FBLatLong *)arg1 ;
-(void)setTimezone:(NSString *)arg1 ;
-(NSString *)timezone;
-(NSArray *)styles;
@end

