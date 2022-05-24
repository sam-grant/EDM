void DeltaAEDMAcceptancePerMMVsMomentum()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 11 18:45:19 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h_delta__3 = new TH1D("h_delta__3","",6,1000,2500);
   h_delta__3->SetBinContent(1,0.1593452);
   h_delta__3->SetBinContent(2,0.04166516);
   h_delta__3->SetBinContent(3,0.06442569);
   h_delta__3->SetBinContent(4,0.04459225);
   h_delta__3->SetBinContent(5,0.1160694);
   h_delta__3->SetBinContent(6,0.08881077);
   h_delta__3->SetMinimum(0);
   h_delta__3->SetMaximum(0.17);
   h_delta__3->SetEntries(12);
   h_delta__3->SetStats(0);
   h_delta__3->SetMarkerStyle(20);
   h_delta__3->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   h_delta__3->GetXaxis()->CenterTitle(true);
   h_delta__3->GetXaxis()->SetLabelFont(42);
   h_delta__3->GetXaxis()->SetTitleSize(0.04);
   h_delta__3->GetXaxis()->SetTitleOffset(1.1);
   h_delta__3->GetXaxis()->SetTitleFont(42);
   h_delta__3->GetYaxis()->SetTitle("#Delta A_{EDM} acceptance fraction per mm / 250 MeV");
   h_delta__3->GetYaxis()->CenterTitle(true);
   h_delta__3->GetYaxis()->SetNdivisions(4000510);
   h_delta__3->GetYaxis()->SetLabelFont(42);
   h_delta__3->GetYaxis()->SetTitleSize(0.04);
   h_delta__3->GetYaxis()->SetTitleOffset(1.2);
   h_delta__3->GetYaxis()->SetTitleFont(42);
   h_delta__3->GetZaxis()->SetLabelFont(42);
   h_delta__3->GetZaxis()->SetTitleOffset(1);
   h_delta__3->GetZaxis()->SetTitleFont(42);
   h_delta__3->Draw("PL");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
