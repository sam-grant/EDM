void Y_33()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 13:12:28 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *Y_33__69 = new TH1F("Y_33__69","Plane 33",100,-100,100);
   Y_33__69->SetBinContent(25,1);
   Y_33__69->SetBinContent(41,6);
   Y_33__69->SetBinContent(42,11);
   Y_33__69->SetBinContent(43,31);
   Y_33__69->SetBinContent(44,19);
   Y_33__69->SetBinContent(45,17);
   Y_33__69->SetBinContent(46,17);
   Y_33__69->SetBinContent(47,16);
   Y_33__69->SetBinContent(48,13);
   Y_33__69->SetBinContent(49,36);
   Y_33__69->SetBinContent(50,79);
   Y_33__69->SetBinContent(51,43);
   Y_33__69->SetBinContent(52,10);
   Y_33__69->SetBinContent(53,12);
   Y_33__69->SetBinContent(54,13);
   Y_33__69->SetBinContent(55,11);
   Y_33__69->SetBinContent(56,15);
   Y_33__69->SetBinContent(57,18);
   Y_33__69->SetBinContent(58,27);
   Y_33__69->SetBinContent(59,30);
   Y_33__69->SetBinContent(65,1);
   Y_33__69->SetBinContent(70,1);
   Y_33__69->SetBinContent(78,1);
   Y_33__69->SetEntries(428);
   Y_33__69->SetLineWidth(3);
   Y_33__69->GetXaxis()->SetTitle("Y [mm]");
   Y_33__69->GetXaxis()->CenterTitle(true);
   Y_33__69->GetXaxis()->SetLabelFont(42);
   Y_33__69->GetXaxis()->SetTitleSize(0.04);
   Y_33__69->GetXaxis()->SetTitleOffset(1.1);
   Y_33__69->GetXaxis()->SetTitleFont(42);
   Y_33__69->GetYaxis()->SetTitle("Ghost tracks");
   Y_33__69->GetYaxis()->CenterTitle(true);
   Y_33__69->GetYaxis()->SetNdivisions(4000510);
   Y_33__69->GetYaxis()->SetLabelFont(42);
   Y_33__69->GetYaxis()->SetTitleSize(0.04);
   Y_33__69->GetYaxis()->SetTitleOffset(1.1);
   Y_33__69->GetYaxis()->SetTitleFont(42);
   Y_33__69->GetZaxis()->SetLabelFont(42);
   Y_33__69->GetZaxis()->SetTitleOffset(1);
   Y_33__69->GetZaxis()->SetTitleFont(42);
   Y_33__69->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
