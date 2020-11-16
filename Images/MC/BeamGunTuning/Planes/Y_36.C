void Y_36()
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
   
   TH1F *Y_36__75 = new TH1F("Y_36__75","Plane 36",100,-100,100);
   Y_36__75->SetBinContent(39,1);
   Y_36__75->SetBinContent(41,5);
   Y_36__75->SetBinContent(42,10);
   Y_36__75->SetBinContent(43,34);
   Y_36__75->SetBinContent(44,16);
   Y_36__75->SetBinContent(45,20);
   Y_36__75->SetBinContent(46,15);
   Y_36__75->SetBinContent(47,14);
   Y_36__75->SetBinContent(48,16);
   Y_36__75->SetBinContent(49,36);
   Y_36__75->SetBinContent(50,75);
   Y_36__75->SetBinContent(51,44);
   Y_36__75->SetBinContent(52,12);
   Y_36__75->SetBinContent(53,12);
   Y_36__75->SetBinContent(54,12);
   Y_36__75->SetBinContent(55,11);
   Y_36__75->SetBinContent(56,17);
   Y_36__75->SetBinContent(57,18);
   Y_36__75->SetBinContent(58,26);
   Y_36__75->SetBinContent(59,30);
   Y_36__75->SetBinContent(64,1);
   Y_36__75->SetBinContent(70,1);
   Y_36__75->SetBinContent(77,1);
   Y_36__75->SetEntries(427);
   Y_36__75->SetLineWidth(3);
   Y_36__75->GetXaxis()->SetTitle("Y [mm]");
   Y_36__75->GetXaxis()->CenterTitle(true);
   Y_36__75->GetXaxis()->SetLabelFont(42);
   Y_36__75->GetXaxis()->SetTitleSize(0.04);
   Y_36__75->GetXaxis()->SetTitleOffset(1.1);
   Y_36__75->GetXaxis()->SetTitleFont(42);
   Y_36__75->GetYaxis()->SetTitle("Ghost tracks");
   Y_36__75->GetYaxis()->CenterTitle(true);
   Y_36__75->GetYaxis()->SetNdivisions(4000510);
   Y_36__75->GetYaxis()->SetLabelFont(42);
   Y_36__75->GetYaxis()->SetTitleSize(0.04);
   Y_36__75->GetYaxis()->SetTitleOffset(1.1);
   Y_36__75->GetYaxis()->SetTitleFont(42);
   Y_36__75->GetZaxis()->SetLabelFont(42);
   Y_36__75->GetZaxis()->SetTitleOffset(1);
   Y_36__75->GetZaxis()->SetTitleFont(42);
   Y_36__75->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
