void Y_31()
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
   
   TH1F *Y_31__65 = new TH1F("Y_31__65","Plane 31",100,-100,100);
   Y_31__65->SetBinContent(28,1);
   Y_31__65->SetBinContent(41,7);
   Y_31__65->SetBinContent(42,11);
   Y_31__65->SetBinContent(43,33);
   Y_31__65->SetBinContent(44,18);
   Y_31__65->SetBinContent(45,18);
   Y_31__65->SetBinContent(46,15);
   Y_31__65->SetBinContent(47,14);
   Y_31__65->SetBinContent(48,14);
   Y_31__65->SetBinContent(49,32);
   Y_31__65->SetBinContent(50,86);
   Y_31__65->SetBinContent(51,41);
   Y_31__65->SetBinContent(52,11);
   Y_31__65->SetBinContent(53,9);
   Y_31__65->SetBinContent(54,12);
   Y_31__65->SetBinContent(55,12);
   Y_31__65->SetBinContent(56,14);
   Y_31__65->SetBinContent(57,18);
   Y_31__65->SetBinContent(58,26);
   Y_31__65->SetBinContent(59,33);
   Y_31__65->SetBinContent(65,1);
   Y_31__65->SetBinContent(70,1);
   Y_31__65->SetBinContent(76,1);
   Y_31__65->SetEntries(428);
   Y_31__65->SetLineWidth(3);
   Y_31__65->GetXaxis()->SetTitle("Y [mm]");
   Y_31__65->GetXaxis()->CenterTitle(true);
   Y_31__65->GetXaxis()->SetLabelFont(42);
   Y_31__65->GetXaxis()->SetTitleSize(0.04);
   Y_31__65->GetXaxis()->SetTitleOffset(1.1);
   Y_31__65->GetXaxis()->SetTitleFont(42);
   Y_31__65->GetYaxis()->SetTitle("Ghost tracks");
   Y_31__65->GetYaxis()->CenterTitle(true);
   Y_31__65->GetYaxis()->SetNdivisions(4000510);
   Y_31__65->GetYaxis()->SetLabelFont(42);
   Y_31__65->GetYaxis()->SetTitleSize(0.04);
   Y_31__65->GetYaxis()->SetTitleOffset(1.1);
   Y_31__65->GetYaxis()->SetTitleFont(42);
   Y_31__65->GetZaxis()->SetLabelFont(42);
   Y_31__65->GetZaxis()->SetTitleOffset(1);
   Y_31__65->GetZaxis()->SetTitleFont(42);
   Y_31__65->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
