void h_tot_tmp()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 24 21:06:54 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h_yRunAvg__1 = new TH1D("h_yRunAvg__1","",3750,0,150);
   h_yRunAvg__1->SetBinContent(1887,6);
   h_yRunAvg__1->SetBinContent(1888,14);
   h_yRunAvg__1->SetBinContent(1889,6);
   h_yRunAvg__1->SetBinContent(1890,4);
   h_yRunAvg__1->SetBinContent(1891,14);
   h_yRunAvg__1->SetBinContent(1892,4);
   h_yRunAvg__1->SetBinContent(1893,1);
   h_yRunAvg__1->SetBinContent(1894,7);
   h_yRunAvg__1->SetBinContent(1895,5);
   h_yRunAvg__1->SetEntries(61);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.735,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("Entries = 61     ");
   ptstats_LaTex = ptstats->AddText("Mean  =   75.6 #pm 0.01317");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.1028 #pm 0.009311");
   ptstats->SetOptStat(2210);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   h_yRunAvg__1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(h_yRunAvg__1);
   h_yRunAvg__1->GetXaxis()->SetTitle("#LTy_{All calos}#GT [mm]");
   h_yRunAvg__1->GetXaxis()->SetRange(1851,1875);
   h_yRunAvg__1->GetXaxis()->CenterTitle(true);
   h_yRunAvg__1->GetXaxis()->SetLabelFont(42);
   h_yRunAvg__1->GetXaxis()->SetLabelSize(0.035);
   h_yRunAvg__1->GetXaxis()->SetTitleOffset(1.1);
   h_yRunAvg__1->GetXaxis()->SetTitleFont(42);
   h_yRunAvg__1->GetYaxis()->SetTitle("Runs");
   h_yRunAvg__1->GetYaxis()->CenterTitle(true);
   h_yRunAvg__1->GetYaxis()->SetNdivisions(4000510);
   h_yRunAvg__1->GetYaxis()->SetLabelFont(42);
   h_yRunAvg__1->GetYaxis()->SetLabelSize(0.035);
   h_yRunAvg__1->GetYaxis()->SetTitleOffset(1.1);
   h_yRunAvg__1->GetYaxis()->SetTitleFont(42);
   h_yRunAvg__1->GetZaxis()->SetLabelFont(42);
   h_yRunAvg__1->GetZaxis()->SetLabelSize(0.035);
   h_yRunAvg__1->GetZaxis()->SetTitleSize(0.035);
   h_yRunAvg__1->GetZaxis()->SetTitleFont(42);
   h_yRunAvg__1->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
