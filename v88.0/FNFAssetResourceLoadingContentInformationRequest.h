/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FNFAssetResourceLoadingContentInformationRequest : NSObject {

	BOOL _byteRangeAccessSupported;
	long long _contentLength;
	NSString* _contentType;

}

@property (assign,nonatomic) long long contentLength;                                                      //@synthesize contentLength=_contentLength - In the implementation block
@property (nonatomic,copy) NSString * contentType;                                                         //@synthesize contentType=_contentType - In the implementation block
@property (assign,getter=isByteRangeAccessSupported,nonatomic) BOOL byteRangeAccessSupported;              //@synthesize byteRangeAccessSupported=_byteRangeAccessSupported - In the implementation block
-(void)setContentType:(NSString *)arg1 ;
-(NSString *)contentType;
-(BOOL)isByteRangeAccessSupported;
-(void)setContentLength:(long long)arg1 ;
-(void)setByteRangeAccessSupported:(BOOL)arg1 ;
-(long long)contentLength;
@end

