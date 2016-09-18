/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMemPhoto, NSString, NSMutableDictionary;

@interface FBPhotoViewControllerUFILogger : NSObject {

	FBMemPhoto* _photo;
	NSString* _openingSource;
	NSMutableDictionary* _photoIDMap;

}

@property (nonatomic,copy) NSString * openingSource;                      //@synthesize openingSource=_openingSource - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * photoIDMap;              //@synthesize photoIDMap=_photoIDMap - In the implementation block
-(id)initWithOpeningSource:(id)arg1 ;
-(void)stopWithPhoto:(id)arg1 result:(id)arg2 ;
-(void)startWithPhoto:(id)arg1 logType:(id)arg2 ;
-(NSString *)openingSource;
-(void)setOpeningSource:(NSString *)arg1 ;
-(NSMutableDictionary *)photoIDMap;
-(void)setPhotoIDMap:(NSMutableDictionary *)arg1 ;
@end

