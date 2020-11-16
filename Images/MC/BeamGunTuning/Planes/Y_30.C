void Y_30()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 13:12:27 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *Y_30__63 = new TH1F("Y_30__63","Plane 30",100,-100,100);
   Y_30__63->SetBinContent(28,1);
   Y_30__63->SetBinContent(41,7);
   Y_30__63->SetBinContent(42,12);
   Y_30__63->SetBinContent(43,28);
   Y_30__63->SetBinContent(44,24);
   Y_30__63->SetBinContent(45,16);
   Y_30__63->SetBinContent(46,17);
   Y_30__63->SetBinContent(47,14);
   Y_30__63->SetBinContent(48,13);
   Y_30__63->SetBinContent(49,31);
   Y_30__63->SetBinContent(50,85);
   Y_30__63->SetBinContent(51,42);
   Y_30__63->SetBinContent(52,9);
   Y_30__63->SetBinContent(53,12);
   Y_30__63->SetBinContent(54,11);
   Y_30__63->SetBinContent(55,14);
   Y_30__63->SetBinContent(56,13);
   Y_30__63->SetBinContent(57,17);
   Y_30__63->SetBinContent(58,26);
   Y_30__63->SetBinContent(59,33);
   Y_30__63->SetBinContent(66,1);
   Y_30__63->SetBinContent(70,1);
   Y_30__63->SetBinContent(75,1);
   Y_30__63->SetEntries(428);
   Y_30__63->SetLineWidth(3);
   Y_30__63->GetXaxis()->SetTitle("Y [mm]");
   Y_30__63->GetXaxis()->CenterTitle(true);
   Y_30__63->GetXaxis()->SetLabelFont(42);
   Y_30__63->GetXaxis()->SetTitleSize(0.04);
   Y_30__63->GetXaxis()->SetTitleOffset(1.1);
   Y_30__63->GetXaxis()->SetTitleFont(42);
   Y_30__63->GetYaxis()->SetTitle("Ghost tracks");
   Y_30__63->GetYaxis()->CenterTitle(true);
   Y_30__63->GetYaxis()->SetNdivisions(4000510);
   Y_30__63->GetYaxis()->SetLabelFont(42);
   Y_30__63->GetYaxis()->SetTitleSize(0.04);
   Y_30__63->GetYaxis()->SetTitleOffset(1.1);
   Y_30__63->GetYaxis()->SetTitleFont(42);
   Y_30__63->GetZaxis()->SetLabelFont(42);
   Y_30__63->GetZaxis()->SetTitleOffset(1);
   Y_30__63->GetZaxis()->SetTitleFont(42);
   Y_30__63->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
