/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBWebPhotoViewStreamingConfigurator : NSObject {

	/*^block*/id _imageFlagsToStreamConfigurator;
	/*^block*/id _imageFlagsToNotifyConfigurator;

}

@property (nonatomic,copy,readonly) id imageFlagsToStreamConfigurator;              //@synthesize imageFlagsToStreamConfigurator=_imageFlagsToStreamConfigurator - In the implementation block
@property (nonatomic,copy,readonly) id imageFlagsToNotifyConfigurator;              //@synthesize imageFlagsToNotifyConfigurator=_imageFlagsToNotifyConfigurator - In the implementation block
-(id)initWithImageFlagsToStreamConfigurator:(/*^block*/id)arg1 imageFlagsToNotifyConfigurator:(/*^block*/id)arg2 ;
-(id)imageFlagsToStreamConfigurator;
-(id)imageFlagsToNotifyConfigurator;
-(id)initWithImageFlagsToNotifyConfigurator:(/*^block*/id)arg1 ;
@end

