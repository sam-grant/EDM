void Y_22()
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
   
   TH1F *Y_22__47 = new TH1F("Y_22__47","Plane 22",100,-100,100);
   Y_22__47->SetBinContent(34,1);
   Y_22__47->SetBinContent(37,1);
   Y_22__47->SetBinContent(41,6);
   Y_22__47->SetBinContent(42,8);
   Y_22__47->SetBinContent(43,40);
   Y_22__47->SetBinContent(44,18);
   Y_22__47->SetBinContent(45,16);
   Y_22__47->SetBinContent(46,14);
   Y_22__47->SetBinContent(47,13);
   Y_22__47->SetBinContent(48,12);
   Y_22__47->SetBinContent(49,40);
   Y_22__47->SetBinContent(50,78);
   Y_22__47->SetBinContent(51,42);
   Y_22__47->SetBinContent(52,13);
   Y_22__47->SetBinContent(53,14);
   Y_22__47->SetBinContent(54,9);
   Y_22__47->SetBinContent(55,12);
   Y_22__47->SetBinContent(56,16);
   Y_22__47->SetBinContent(57,20);
   Y_22__47->SetBinContent(58,30);
   Y_22__47->SetBinContent(59,23);
   Y_22__47->SetBinContent(66,1);
   Y_22__47->SetBinContent(67,1);
   Y_22__47->SetBinContent(69,1);
   Y_22__47->SetBinContent(74,1);
   Y_22__47->SetBinContent(77,1);
   Y_22__47->SetEntries(431);
   Y_22__47->SetLineWidth(3);
   Y_22__47->GetXaxis()->SetTitle("Y [mm]");
   Y_22__47->GetXaxis()->CenterTitle(true);
   Y_22__47->GetXaxis()->SetLabelFont(42);
   Y_22__47->GetXaxis()->SetTitleSize(0.04);
   Y_22__47->GetXaxis()->SetTitleOffset(1.1);
   Y_22__47->GetXaxis()->SetTitleFont(42);
   Y_22__47->GetYaxis()->SetTitle("Ghost tracks");
   Y_22__47->GetYaxis()->CenterTitle(true);
   Y_22__47->GetYaxis()->SetNdivisions(4000510);
   Y_22__47->GetYaxis()->SetLabelFont(42);
   Y_22__47->GetYaxis()->SetTitleSize(0.04);
   Y_22__47->GetYaxis()->SetTitleOffset(1.1);
   Y_22__47->GetYaxis()->SetTitleFont(42);
   Y_22__47->GetZaxis()->SetLabelFont(42);
   Y_22__47->GetZaxis()->SetTitleOffset(1);
   Y_22__47->GetZaxis()->SetTitleFont(42);
   Y_22__47->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
