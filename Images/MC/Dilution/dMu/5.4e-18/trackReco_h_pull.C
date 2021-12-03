void trackReco_h_pull()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 18:01:23 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *trackReco_h_pull__1 = new TH1D("trackReco_h_pull__1","",24,-3,3);
   trackReco_h_pull__1->SetBinContent(5,1);
   trackReco_h_pull__1->SetBinContent(10,1);
   trackReco_h_pull__1->SetBinContent(11,1);
   trackReco_h_pull__1->SetBinContent(12,1);
   trackReco_h_pull__1->SetBinContent(13,1);
   trackReco_h_pull__1->SetBinContent(14,1);
   trackReco_h_pull__1->SetBinContent(16,1);
   trackReco_h_pull__1->SetBinContent(18,1);
   trackReco_h_pull__1->SetEntries(8);
   trackReco_h_pull__1->GetXaxis()->SetTitle("Pull [#sigma]");
   trackReco_h_pull__1->GetXaxis()->CenterTitle(true);
   trackReco_h_pull__1->GetXaxis()->SetLabelFont(42);
   trackReco_h_pull__1->GetXaxis()->SetTitleSize(0.04);
   trackReco_h_pull__1->GetXaxis()->SetTitleOffset(1.1);
   trackReco_h_pull__1->GetXaxis()->SetTitleFont(42);
   trackReco_h_pull__1->GetYaxis()->SetTitle(" Entries / 0.25 #sigma");
   trackReco_h_pull__1->GetYaxis()->CenterTitle(true);
   trackReco_h_pull__1->GetYaxis()->SetNdivisions(4000510);
   trackReco_h_pull__1->GetYaxis()->SetLabelFont(42);
   trackReco_h_pull__1->GetYaxis()->SetTitleSize(0.04);
   trackReco_h_pull__1->GetYaxis()->SetTitleOffset(1.1);
   trackReco_h_pull__1->GetYaxis()->SetTitleFont(42);
   trackReco_h_pull__1->GetZaxis()->SetLabelFont(42);
   trackReco_h_pull__1->GetZaxis()->SetTitleOffset(1);
   trackReco_h_pull__1->GetZaxis()->SetTitleFont(42);
   trackReco_h_pull__1->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
