#import "GPUImageFilterGroup.h"

@class GPUImageGaussianBlurFilter;

@interface GPUImageGaussianSelectiveBlurFilter : GPUImageFilterGroup 
{
    GPUImageGaussianBlurFilter *blurFilter;
    GPUImageFilter *selectiveFocusFilter;
}

@property (readwrite, nonatomic) CGFloat excludeCircleRadius;
@property (readwrite, nonatomic) CGPoint excludeCirclePoint;
@property (readwrite, nonatomic) CGFloat excludeBlurSize;

@end
