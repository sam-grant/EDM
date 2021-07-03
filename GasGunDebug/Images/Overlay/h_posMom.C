void h_posMom()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 24 18:45:08 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *h_posMom__1 = new TH1F("h_posMom__1","",310,0,3100);
   h_posMom__1->SetBinContent(1,0.04985755);
   h_posMom__1->SetBinContent(2,0.2376068);
   h_posMom__1->SetBinContent(3,0.4754986);
   h_posMom__1->SetBinContent(4,0.8096866);
   h_posMom__1->SetBinContent(5,1);
   h_posMom__1->SetBinContent(6,0.2763533);
   h_posMom__1->SetBinError(1,0.003768877);
   h_posMom__1->SetBinError(2,0.008227652);
   h_posMom__1->SetBinError(3,0.01163914);
   h_posMom__1->SetBinError(4,0.01518815);
   h_posMom__1->SetBinError(5,0.01687899);
   h_posMom__1->SetBinError(6,0.008873169);
   h_posMom__1->SetEntries(10000);
   h_posMom__1->GetXaxis()->SetTitle("Positron momentum  [MeV]");
   h_posMom__1->GetXaxis()->CenterTitle(true);
   h_posMom__1->GetXaxis()->SetLabelFont(42);
   h_posMom__1->GetXaxis()->SetTitleSize(0.04);
   h_posMom__1->GetXaxis()->SetTitleOffset(1.1);
   h_posMom__1->GetXaxis()->SetTitleFont(42);
   h_posMom__1->GetYaxis()->SetTitle("Normalised units");
   h_posMom__1->GetYaxis()->CenterTitle(true);
   h_posMom__1->GetYaxis()->SetNdivisions(4000510);
   h_posMom__1->GetYaxis()->SetLabelFont(42);
   h_posMom__1->GetYaxis()->SetTitleSize(0.04);
   h_posMom__1->GetYaxis()->SetTitleOffset(1.1);
   h_posMom__1->GetYaxis()->SetTitleFont(42);
   h_posMom__1->GetZaxis()->SetLabelFont(42);
   h_posMom__1->GetZaxis()->SetTitleOffset(1);
   h_posMom__1->GetZaxis()->SetTitleFont(42);
   h_posMom__1->Draw("HIST E");
   
   TH1F *h_posMom__2 = new TH1F("h_posMom__2","",310,0,3100);
   h_posMom__2->SetBinContent(1,0.0285879);
   h_posMom__2->SetBinContent(2,0.224083);
   h_posMom__2->SetBinContent(3,0.5295987);
   h_posMom__2->SetBinContent(4,0.799018);
   h_posMom__2->SetBinContent(5,1);
   h_posMom__2->SetBinContent(6,0.3066705);
   h_posMom__2->SetEntries(9);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("h_posMom");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 9      ");
   ptstats_LaTex = ptstats->AddText("Mean  =   36.9");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  11.48");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   h_posMom__2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(h_posMom__2);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   h_posMom__2->SetLineColor(ci);
   h_posMom__2->GetXaxis()->SetTitle("Positron momentum [MeV]");
   h_posMom__2->GetXaxis()->SetLabelFont(42);
   h_posMom__2->GetXaxis()->SetTitleOffset(1);
   h_posMom__2->GetXaxis()->SetTitleFont(42);
   h_posMom__2->GetYaxis()->SetTitle("Entries");
   h_posMom__2->GetYaxis()->SetLabelFont(42);
   h_posMom__2->GetYaxis()->SetTitleFont(42);
   h_posMom__2->GetZaxis()->SetLabelFont(42);
   h_posMom__2->GetZaxis()->SetTitleOffset(1);
   h_posMom__2->GetZaxis()->SetTitleFont(42);
   h_posMom__2->Draw("HIST E SAME");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("h_posMom","gm2ringsim","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("h_posMom","EDMSim","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
