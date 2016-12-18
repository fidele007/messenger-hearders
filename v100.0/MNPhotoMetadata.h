/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDate, NSData;

@interface MNPhotoMetadata : FBValueObject <NSCopying, NSCoding> {

	BOOL _renderAsSticker;
	double _width;
	double _height;
	NSString* _creatorId;
	NSDate* _createdTime;
	NSString* _fileName;
	long long _fileSize;
	NSString* _assetID;
	NSData* _miniPreview;

}

@property (nonatomic,readonly) double width;                           //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) double height;                          //@synthesize height=_height - In the implementation block
@property (nonatomic,copy,readonly) NSString * creatorId;              //@synthesize creatorId=_creatorId - In the implementation block
@property (nonatomic,copy,readonly) NSDate * createdTime;              //@synthesize createdTime=_createdTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * fileName;               //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,readonly) long long fileSize;                     //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,readonly) BOOL renderAsSticker;                   //@synthesize renderAsSticker=_renderAsSticker - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetID;                //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,copy,readonly) NSData * miniPreview;              //@synthesize miniPreview=_miniPreview - In the implementation block
-(NSString *)assetID;
-(NSString *)creatorId;
-(NSDate *)createdTime;
-(id)initWithWidth:(double)arg1 height:(double)arg2 creatorId:(id)arg3 createdTime:(id)arg4 fileName:(id)arg5 fileSize:(long long)arg6 renderAsSticker:(BOOL)arg7 assetID:(id)arg8 miniPreview:(id)arg9 ;
-(BOOL)renderAsSticker;
-(NSData *)miniPreview;
-(double)width;
-(double)height;
-(long long)fileSize;
-(NSString *)fileName;
@end

