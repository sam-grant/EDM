void P()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 13:42:31 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *P__2 = new TH1F("P__2","",110,0,3300);
   P__2->SetBinContent(65,2);
   P__2->SetBinContent(69,1);
   P__2->SetBinContent(72,2);
   P__2->SetBinContent(74,3);
   P__2->SetBinContent(78,3);
   P__2->SetBinContent(83,4);
   P__2->SetBinContent(84,3);
   P__2->SetBinContent(85,2);
   P__2->SetBinContent(86,3);
   P__2->SetBinContent(87,7);
   P__2->SetBinContent(88,2);
   P__2->SetBinContent(89,1);
   P__2->SetBinContent(90,5);
   P__2->SetBinContent(91,5);
   P__2->SetBinContent(92,3);
   P__2->SetBinContent(93,7);
   P__2->SetBinContent(94,3);
   P__2->SetBinContent(95,11);
   P__2->SetBinContent(96,17);
   P__2->SetBinContent(97,7);
   P__2->SetBinContent(98,16);
   P__2->SetBinContent(99,12);
   P__2->SetBinContent(100,70);
   P__2->SetBinContent(101,89);
   P__2->SetBinContent(102,149);
   P__2->SetBinContent(103,299);
   P__2->SetBinContent(104,20571);
   P__2->SetBinContent(105,67);
   P__2->SetBinContent(106,70);
   P__2->SetBinContent(107,5);
   P__2->SetEntries(21439);
   P__2->SetLineWidth(3);
   P__2->GetXaxis()->SetTitle("Momentum [MeV]");
   P__2->GetXaxis()->CenterTitle(true);
   P__2->GetXaxis()->SetLabelFont(42);
   P__2->GetXaxis()->SetTitleSize(0.04);
   P__2->GetXaxis()->SetTitleOffset(1.1);
   P__2->GetXaxis()->SetTitleFont(42);
   P__2->GetYaxis()->SetTitle("Ghost tracks");
   P__2->GetYaxis()->CenterTitle(true);
   P__2->GetYaxis()->SetNdivisions(4000510);
   P__2->GetYaxis()->SetLabelFont(42);
   P__2->GetYaxis()->SetTitleSize(0.04);
   P__2->GetYaxis()->SetTitleOffset(1.1);
   P__2->GetYaxis()->SetTitleFont(42);
   P__2->GetZaxis()->SetLabelFont(42);
   P__2->GetZaxis()->SetTitleOffset(1);
   P__2->GetZaxis()->SetTitleFont(42);
   P__2->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
