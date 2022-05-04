void h_A()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jul 28 12:37:13 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *h_A__15 = new TH1F("h_A__15","",20,0,3000);
   h_A__15->SetBinContent(1,0.01646483);
   h_A__15->SetBinContent(2,0.02481986);
   h_A__15->SetBinContent(3,0.04721603);
   h_A__15->SetBinContent(4,0.05260386);
   h_A__15->SetBinContent(5,0.05500539);
   h_A__15->SetBinContent(6,0.07606337);
   h_A__15->SetBinContent(7,0.07850518);
   h_A__15->SetBinContent(8,0.09263737);
   h_A__15->SetBinContent(9,0.1052169);
   h_A__15->SetBinContent(10,0.1202122);
   h_A__15->SetBinContent(11,0.1159572);
   h_A__15->SetBinContent(12,0.1242399);
   h_A__15->SetBinContent(13,0.1272658);
   h_A__15->SetBinContent(14,0.1313481);
   h_A__15->SetBinContent(15,0.1170615);
   h_A__15->SetBinContent(16,0.1401702);
   h_A__15->SetBinContent(17,0.1335846);
   h_A__15->SetBinContent(18,0.1069391);
   h_A__15->SetBinContent(19,0.08527372);
   h_A__15->SetBinContent(20,0.07668555);
   h_A__15->SetBinContent(21,0.006638601);
   h_A__15->SetEntries(310);
   h_A__15->GetXaxis()->SetTitle("Track momentum [MeV]");
   h_A__15->GetXaxis()->SetRange(1,300);
   h_A__15->GetXaxis()->CenterTitle(true);
   h_A__15->GetXaxis()->SetLabelFont(42);
   h_A__15->GetXaxis()->SetTitleSize(0.04);
   h_A__15->GetXaxis()->SetTitleOffset(1.1);
   h_A__15->GetXaxis()->SetTitleFont(42);
   h_A__15->GetYaxis()->SetTitle("Entries");
   h_A__15->GetYaxis()->CenterTitle(true);
   h_A__15->GetYaxis()->SetNdivisions(4000510);
   h_A__15->GetYaxis()->SetLabelFont(42);
   h_A__15->GetYaxis()->SetTitleSize(0.04);
   h_A__15->GetYaxis()->SetTitleOffset(1.1);
   h_A__15->GetYaxis()->SetTitleFont(42);
   h_A__15->GetZaxis()->SetLabelFont(42);
   h_A__15->GetZaxis()->SetTitleOffset(1);
   h_A__15->GetZaxis()->SetTitleFont(42);
   h_A__15->Draw("E");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
