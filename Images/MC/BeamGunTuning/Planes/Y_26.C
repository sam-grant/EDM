void Y_26()
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
   
   TH1F *Y_26__55 = new TH1F("Y_26__55","Plane 26",100,-100,100);
   Y_26__55->SetBinContent(31,1);
   Y_26__55->SetBinContent(41,4);
   Y_26__55->SetBinContent(42,14);
   Y_26__55->SetBinContent(43,31);
   Y_26__55->SetBinContent(44,22);
   Y_26__55->SetBinContent(45,17);
   Y_26__55->SetBinContent(46,14);
   Y_26__55->SetBinContent(47,12);
   Y_26__55->SetBinContent(48,16);
   Y_26__55->SetBinContent(49,36);
   Y_26__55->SetBinContent(50,82);
   Y_26__55->SetBinContent(51,39);
   Y_26__55->SetBinContent(52,15);
   Y_26__55->SetBinContent(53,9);
   Y_26__55->SetBinContent(54,13);
   Y_26__55->SetBinContent(55,10);
   Y_26__55->SetBinContent(56,15);
   Y_26__55->SetBinContent(57,16);
   Y_26__55->SetBinContent(58,32);
   Y_26__55->SetBinContent(59,27);
   Y_26__55->SetBinContent(66,1);
   Y_26__55->SetBinContent(69,1);
   Y_26__55->SetBinContent(72,1);
   Y_26__55->SetBinContent(75,1);
   Y_26__55->SetEntries(429);
   Y_26__55->SetLineWidth(3);
   Y_26__55->GetXaxis()->SetTitle("Y [mm]");
   Y_26__55->GetXaxis()->CenterTitle(true);
   Y_26__55->GetXaxis()->SetLabelFont(42);
   Y_26__55->GetXaxis()->SetTitleSize(0.04);
   Y_26__55->GetXaxis()->SetTitleOffset(1.1);
   Y_26__55->GetXaxis()->SetTitleFont(42);
   Y_26__55->GetYaxis()->SetTitle("Ghost tracks");
   Y_26__55->GetYaxis()->CenterTitle(true);
   Y_26__55->GetYaxis()->SetNdivisions(4000510);
   Y_26__55->GetYaxis()->SetLabelFont(42);
   Y_26__55->GetYaxis()->SetTitleSize(0.04);
   Y_26__55->GetYaxis()->SetTitleOffset(1.1);
   Y_26__55->GetYaxis()->SetTitleFont(42);
   Y_26__55->GetZaxis()->SetLabelFont(42);
   Y_26__55->GetZaxis()->SetTitleOffset(1);
   Y_26__55->GetZaxis()->SetTitleFont(42);
   Y_26__55->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
