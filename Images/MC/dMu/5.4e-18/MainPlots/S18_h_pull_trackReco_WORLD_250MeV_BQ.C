void S18_h_pull_trackReco_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:31:37 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *S18__edmFit_pull__3 = new TH1D("S18__edmFit_pull__3","S18_",40,-5,5);
   S18__edmFit_pull__3->SetBinContent(13,1);
   S18__edmFit_pull__3->SetBinContent(14,3);
   S18__edmFit_pull__3->SetBinContent(15,1);
   S18__edmFit_pull__3->SetBinContent(17,2);
   S18__edmFit_pull__3->SetBinContent(18,4);
   S18__edmFit_pull__3->SetBinContent(19,2);
   S18__edmFit_pull__3->SetBinContent(20,1);
   S18__edmFit_pull__3->SetBinContent(22,6);
   S18__edmFit_pull__3->SetBinContent(23,3);
   S18__edmFit_pull__3->SetBinContent(26,3);
   S18__edmFit_pull__3->SetBinContent(27,2);
   S18__edmFit_pull__3->SetBinContent(28,1);
   S18__edmFit_pull__3->SetEntries(29);
   S18__edmFit_pull__3->GetXaxis()->SetTitle("Pull [#sigma]");
   S18__edmFit_pull__3->GetXaxis()->CenterTitle(true);
   S18__edmFit_pull__3->GetXaxis()->SetLabelFont(42);
   S18__edmFit_pull__3->GetXaxis()->SetTitleSize(0.04);
   S18__edmFit_pull__3->GetXaxis()->SetTitleOffset(1.1);
   S18__edmFit_pull__3->GetXaxis()->SetTitleFont(42);
   S18__edmFit_pull__3->GetYaxis()->SetTitle(" Entries / 0.25 #sigma");
   S18__edmFit_pull__3->GetYaxis()->CenterTitle(true);
   S18__edmFit_pull__3->GetYaxis()->SetNdivisions(4000510);
   S18__edmFit_pull__3->GetYaxis()->SetLabelFont(42);
   S18__edmFit_pull__3->GetYaxis()->SetTitleSize(0.04);
   S18__edmFit_pull__3->GetYaxis()->SetTitleOffset(1.1);
   S18__edmFit_pull__3->GetYaxis()->SetTitleFont(42);
   S18__edmFit_pull__3->GetZaxis()->SetLabelFont(42);
   S18__edmFit_pull__3->GetZaxis()->SetTitleOffset(1);
   S18__edmFit_pull__3->GetZaxis()->SetTitleFont(42);
   S18__edmFit_pull__3->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
