void S18_h_pull_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 23:46:13 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *S18_edmFit_pull__2 = new TH1D("S18_edmFit_pull__2","S18",40,-5,5);
   S18_edmFit_pull__2->SetBinContent(13,1);
   S18_edmFit_pull__2->SetBinContent(15,1);
   S18_edmFit_pull__2->SetBinContent(16,2);
   S18_edmFit_pull__2->SetBinContent(17,4);
   S18_edmFit_pull__2->SetBinContent(18,2);
   S18_edmFit_pull__2->SetBinContent(19,3);
   S18_edmFit_pull__2->SetBinContent(20,4);
   S18_edmFit_pull__2->SetBinContent(21,3);
   S18_edmFit_pull__2->SetBinContent(22,2);
   S18_edmFit_pull__2->SetBinContent(24,1);
   S18_edmFit_pull__2->SetBinContent(25,1);
   S18_edmFit_pull__2->SetBinContent(26,2);
   S18_edmFit_pull__2->SetBinContent(27,1);
   S18_edmFit_pull__2->SetBinContent(29,2);
   S18_edmFit_pull__2->SetEntries(29);
   S18_edmFit_pull__2->GetXaxis()->SetTitle("Pull [#sigma]");
   S18_edmFit_pull__2->GetXaxis()->CenterTitle(true);
   S18_edmFit_pull__2->GetXaxis()->SetLabelFont(42);
   S18_edmFit_pull__2->GetXaxis()->SetTitleSize(0.04);
   S18_edmFit_pull__2->GetXaxis()->SetTitleOffset(1.1);
   S18_edmFit_pull__2->GetXaxis()->SetTitleFont(42);
   S18_edmFit_pull__2->GetYaxis()->SetTitle(" Entries / 0.25 #sigma");
   S18_edmFit_pull__2->GetYaxis()->CenterTitle(true);
   S18_edmFit_pull__2->GetYaxis()->SetNdivisions(4000510);
   S18_edmFit_pull__2->GetYaxis()->SetLabelFont(42);
   S18_edmFit_pull__2->GetYaxis()->SetTitleSize(0.04);
   S18_edmFit_pull__2->GetYaxis()->SetTitleOffset(1.1);
   S18_edmFit_pull__2->GetYaxis()->SetTitleFont(42);
   S18_edmFit_pull__2->GetZaxis()->SetLabelFont(42);
   S18_edmFit_pull__2->GetZaxis()->SetTitleOffset(1);
   S18_edmFit_pull__2->GetZaxis()->SetTitleFont(42);
   S18_edmFit_pull__2->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
