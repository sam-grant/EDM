void Y_15()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 13:12:26 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *Y_15__33 = new TH1F("Y_15__33","Plane 15",100,-100,100);
   Y_15__33->SetBinContent(23,1);
   Y_15__33->SetBinContent(41,8);
   Y_15__33->SetBinContent(42,25);
   Y_15__33->SetBinContent(43,26);
   Y_15__33->SetBinContent(44,18);
   Y_15__33->SetBinContent(45,20);
   Y_15__33->SetBinContent(46,12);
   Y_15__33->SetBinContent(47,13);
   Y_15__33->SetBinContent(48,10);
   Y_15__33->SetBinContent(49,45);
   Y_15__33->SetBinContent(50,80);
   Y_15__33->SetBinContent(51,31);
   Y_15__33->SetBinContent(52,15);
   Y_15__33->SetBinContent(53,11);
   Y_15__33->SetBinContent(54,13);
   Y_15__33->SetBinContent(55,18);
   Y_15__33->SetBinContent(56,15);
   Y_15__33->SetBinContent(57,17);
   Y_15__33->SetBinContent(58,33);
   Y_15__33->SetBinContent(59,19);
   Y_15__33->SetBinContent(63,1);
   Y_15__33->SetBinContent(64,2);
   Y_15__33->SetBinContent(67,1);
   Y_15__33->SetBinContent(68,2);
   Y_15__33->SetBinContent(73,1);
   Y_15__33->SetEntries(437);
   Y_15__33->SetLineWidth(3);
   Y_15__33->GetXaxis()->SetTitle("Y [mm]");
   Y_15__33->GetXaxis()->CenterTitle(true);
   Y_15__33->GetXaxis()->SetLabelFont(42);
   Y_15__33->GetXaxis()->SetTitleSize(0.04);
   Y_15__33->GetXaxis()->SetTitleOffset(1.1);
   Y_15__33->GetXaxis()->SetTitleFont(42);
   Y_15__33->GetYaxis()->SetTitle("Ghost tracks");
   Y_15__33->GetYaxis()->CenterTitle(true);
   Y_15__33->GetYaxis()->SetNdivisions(4000510);
   Y_15__33->GetYaxis()->SetLabelFont(42);
   Y_15__33->GetYaxis()->SetTitleSize(0.04);
   Y_15__33->GetYaxis()->SetTitleOffset(1.1);
   Y_15__33->GetYaxis()->SetTitleFont(42);
   Y_15__33->GetZaxis()->SetLabelFont(42);
   Y_15__33->GetZaxis()->SetTitleOffset(1);
   Y_15__33->GetZaxis()->SetTitleFont(42);
   Y_15__33->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
