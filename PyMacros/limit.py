def FC_band(x_bins,mu_bins,s_width,significance):
    #Function to calculate the x-values of the feldman-cousins interval
    #Normalised by sigma for speed! All scaling is done by helper functions.
    
    #x_bins - range of x to scan over
    #width - standard deviation of the gaussian
    #sig - desired significance level 
    #val - measured x to set the limit using
    print('Calculating band...')
    
    def Rscan(bins,val):
        #function to scan for a single mu value for all x
        xwidth = (max(bins)-min(bins))/len(bins)
        Rs = []          
    
    
        #define mu_max for all x - mu_max = max(0,x)
        for xs in bins:
            if xs >= 0:
                mu_max = xs
            elif xs < 0:
                mu_max = 0
    
            #R ratio P(x|mu)/P(x|mu_max)
            R = folded_norm(xs,xwidth,val,1)/folded_norm(xs,xwidth,mu_max,1)
            #R = norm(val,1).pdf(xs)/norm(mu_max,1).pdf(xs)            
            Rs.append([xs,R])      
    
        #sort by R value, largest first    
        Rarr = sorted(Rs, key=lambda x: x[1],reverse=True)
        
        psum = 0 
        xlimvals = []

        #numerically integrate out adding intervals of highest R first
        for p in Rarr:                       
            
            #pv = norm.pdf(p[0],val,1)   
            pv = folded_norm(p[0],xwidth,val,1)
            
            #prob = pv*xwidth #have to scale the pdf prob as it's not normalised right
            prob = pv
            psum += prob
            xlimvals.append(p[0])

               
            if psum > significance:
                break
        
        up = max(xlimvals)
        down = min(xlimvals)
        #print(psum)
        
        if up == max(x_bins):
            print('Warning: upper limit setting not complete, check mu range!')         
        #print(down,up)         
        return down,up
    
    band = []
    for mu in mu_bins:    
        scan = Rscan(x_bins,mu) 
        band.append(scan)

    return band


def find_FC_limits(band,x_bins,mu_bins,testval): 
    #Function to convert the band into limits on x
    print('Setting limits...')
    
    def limscan(xs,mu_bins,testx):
        for i in range(len(xs)):
            lim = mu_bins[i]
            if xs[i] >= testx:
                break
            
        return lim      
    
    upx = []
    downx = []
    
    for i,j in zip(band,mu_bins):
        downx.append(i[1])
        upx.append(i[0])
        
    testx = testval
        
    
    downlim = limscan(downx,mu_bins,testx)
    uplim = limscan(upx,mu_bins,testx) 

        
    if downlim < 0:
        downlim = 0.0
        
    return downlim,uplim,upx,downx

def FC_limit(x,s_width,x_bins=linspace(-10,10,400),mu_bins=linspace(0,8,100),alpha=0.9):
    #Helper function to collect it all together and scale the output 

    print("hello")
    
    testx = abs(x)/s_width
    binwidth = (max(x_bins)-min(x_bins))/len(x_bins)
    
    if testx ==0:
        testx = binwidth #smallest limit that can be calcuated with the step size
        
    print(testx)
    
    if testx > max(mu_bins):
        raise ValueError('x/sigma not in band, scan for wider mean value!')
        
    rough = FC_band(x_bins,mu_bins,s_width,alpha)
    lims = find_FC_limits(rough,x_bins,mu_bins,testx) 
    
    #print('Limits (x10^(n)):',lims[0]*s_width,lims[1]*s_width)
    
    return lims[0]*s_width,lims[1]*s_width

def limitCalc(a,err,CL):

    power = np.floor(np.log10(err))
    amp = a*10**(-1*power)
    err = err*10**(-1*power)
    
    #this can be a little tempramental - if you get errors, adjust the ranges until you don't or limits will be too low
    x_bins=np.linspace(0,80,1000)
    mu_bins=np.linspace(0,40,1000)
    
    l = FC.FC_limit(amp,err,x_bins=x_bins,mu_bins=mu_bins,alpha=CL)

    up = l[1]*10**(power)
    down = l[0]*10**(power)
    
    return down,up

fitTilt=0
fitTilterr=0.1e-18
lim = limitCalc(fitTilt,fitTilterr,0.9)