void h_posMom_1e4_0MeV_WORLD()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 24 09:45:17 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *h_posMom__1 = new TH1F("h_posMom__1","",310,0,3100);
   h_posMom__1->SetBinContent(1,188);
   h_posMom__1->SetBinContent(2,806);
   h_posMom__1->SetBinContent(3,1756);
   h_posMom__1->SetBinContent(4,2798);
   h_posMom__1->SetBinContent(5,3472);
   h_posMom__1->SetBinContent(6,980);
   h_posMom__1->SetEntries(10000);
   h_posMom__1->GetXaxis()->SetTitle("Positron momentum [MeV]");
   h_posMom__1->GetXaxis()->SetRange(1,10);
   h_posMom__1->GetXaxis()->CenterTitle(true);
   h_posMom__1->GetXaxis()->SetLabelFont(42);
   h_posMom__1->GetXaxis()->SetLabelSize(0.035);
   h_posMom__1->GetXaxis()->SetTitleOffset(1.1);
   h_posMom__1->GetXaxis()->SetTitleFont(42);
   h_posMom__1->GetYaxis()->SetTitle("Entries");
   h_posMom__1->GetYaxis()->CenterTitle(true);
   h_posMom__1->GetYaxis()->SetNdivisions(4000510);
   h_posMom__1->GetYaxis()->SetLabelFont(42);
   h_posMom__1->GetYaxis()->SetLabelSize(0.035);
   h_posMom__1->GetYaxis()->SetTitleOffset(1.1);
   h_posMom__1->GetYaxis()->SetTitleFont(42);
   h_posMom__1->GetZaxis()->SetLabelFont(42);
   h_posMom__1->GetZaxis()->SetLabelSize(0.035);
   h_posMom__1->GetZaxis()->SetTitleSize(0.035);
   h_posMom__1->GetZaxis()->SetTitleFont(42);
   h_posMom__1->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
