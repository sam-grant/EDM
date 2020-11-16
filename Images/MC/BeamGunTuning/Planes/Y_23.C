void Y_23()
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
   
   TH1F *Y_23__49 = new TH1F("Y_23__49","Plane 23",100,-100,100);
   Y_23__49->SetBinContent(34,1);
   Y_23__49->SetBinContent(41,5);
   Y_23__49->SetBinContent(42,13);
   Y_23__49->SetBinContent(43,33);
   Y_23__49->SetBinContent(44,20);
   Y_23__49->SetBinContent(45,15);
   Y_23__49->SetBinContent(46,15);
   Y_23__49->SetBinContent(47,13);
   Y_23__49->SetBinContent(48,13);
   Y_23__49->SetBinContent(49,39);
   Y_23__49->SetBinContent(50,80);
   Y_23__49->SetBinContent(51,42);
   Y_23__49->SetBinContent(52,12);
   Y_23__49->SetBinContent(53,14);
   Y_23__49->SetBinContent(54,9);
   Y_23__49->SetBinContent(55,11);
   Y_23__49->SetBinContent(56,16);
   Y_23__49->SetBinContent(57,20);
   Y_23__49->SetBinContent(58,31);
   Y_23__49->SetBinContent(59,23);
   Y_23__49->SetBinContent(66,1);
   Y_23__49->SetBinContent(67,1);
   Y_23__49->SetBinContent(70,1);
   Y_23__49->SetBinContent(74,1);
   Y_23__49->SetEntries(429);
   Y_23__49->SetLineWidth(3);
   Y_23__49->GetXaxis()->SetTitle("Y [mm]");
   Y_23__49->GetXaxis()->CenterTitle(true);
   Y_23__49->GetXaxis()->SetLabelFont(42);
   Y_23__49->GetXaxis()->SetTitleSize(0.04);
   Y_23__49->GetXaxis()->SetTitleOffset(1.1);
   Y_23__49->GetXaxis()->SetTitleFont(42);
   Y_23__49->GetYaxis()->SetTitle("Ghost tracks");
   Y_23__49->GetYaxis()->CenterTitle(true);
   Y_23__49->GetYaxis()->SetNdivisions(4000510);
   Y_23__49->GetYaxis()->SetLabelFont(42);
   Y_23__49->GetYaxis()->SetTitleSize(0.04);
   Y_23__49->GetYaxis()->SetTitleOffset(1.1);
   Y_23__49->GetYaxis()->SetTitleFont(42);
   Y_23__49->GetZaxis()->SetLabelFont(42);
   Y_23__49->GetZaxis()->SetTitleOffset(1);
   Y_23__49->GetZaxis()->SetTitleFont(42);
   Y_23__49->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
