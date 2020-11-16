void Y_11()
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
   
   TH1F *Y_11__25 = new TH1F("Y_11__25","Plane 11",100,-100,100);
   Y_11__25->SetBinContent(25,2);
   Y_11__25->SetBinContent(26,1);
   Y_11__25->SetBinContent(33,2);
   Y_11__25->SetBinContent(36,1);
   Y_11__25->SetBinContent(38,1);
   Y_11__25->SetBinContent(41,6);
   Y_11__25->SetBinContent(42,13);
   Y_11__25->SetBinContent(43,39);
   Y_11__25->SetBinContent(44,19);
   Y_11__25->SetBinContent(45,19);
   Y_11__25->SetBinContent(46,13);
   Y_11__25->SetBinContent(47,12);
   Y_11__25->SetBinContent(48,12);
   Y_11__25->SetBinContent(49,45);
   Y_11__25->SetBinContent(50,78);
   Y_11__25->SetBinContent(51,33);
   Y_11__25->SetBinContent(52,14);
   Y_11__25->SetBinContent(53,16);
   Y_11__25->SetBinContent(54,15);
   Y_11__25->SetBinContent(55,16);
   Y_11__25->SetBinContent(56,19);
   Y_11__25->SetBinContent(57,17);
   Y_11__25->SetBinContent(58,33);
   Y_11__25->SetBinContent(59,16);
   Y_11__25->SetBinContent(60,2);
   Y_11__25->SetBinContent(61,1);
   Y_11__25->SetBinContent(65,2);
   Y_11__25->SetBinContent(72,1);
   Y_11__25->SetBinContent(77,1);
   Y_11__25->SetEntries(449);
   Y_11__25->SetLineWidth(3);
   Y_11__25->GetXaxis()->SetTitle("Y [mm]");
   Y_11__25->GetXaxis()->CenterTitle(true);
   Y_11__25->GetXaxis()->SetLabelFont(42);
   Y_11__25->GetXaxis()->SetTitleSize(0.04);
   Y_11__25->GetXaxis()->SetTitleOffset(1.1);
   Y_11__25->GetXaxis()->SetTitleFont(42);
   Y_11__25->GetYaxis()->SetTitle("Ghost tracks");
   Y_11__25->GetYaxis()->CenterTitle(true);
   Y_11__25->GetYaxis()->SetNdivisions(4000510);
   Y_11__25->GetYaxis()->SetLabelFont(42);
   Y_11__25->GetYaxis()->SetTitleSize(0.04);
   Y_11__25->GetYaxis()->SetTitleOffset(1.1);
   Y_11__25->GetYaxis()->SetTitleFont(42);
   Y_11__25->GetZaxis()->SetLabelFont(42);
   Y_11__25->GetZaxis()->SetTitleOffset(1);
   Y_11__25->GetZaxis()->SetTitleFont(42);
   Y_11__25->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
