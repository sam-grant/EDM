void EDM_delta_prime_vs_p_acceptedDecaysControl_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:40:21 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(442.0582,1.496848,3047.813,1.903714);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1021[8] = {
   876.3507,
   1124.574,
   1373.651,
   1622.836,
   1871.414,
   2119.624,
   2367.727,
   2613.52};
   Double_t _fy1021[8] = {
   1.700281,
   1.694055,
   1.716183,
   1.674468,
   1.710667,
   1.709901,
   1.684301,
   1.704861};
   Double_t _fex1021[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1021[8] = {
   0.05918045,
   0.04936247,
   0.04437015,
   0.04197316,
   0.04232267,
   0.04569068,
   0.05352928,
   0.07064774};
   TGraphErrors *gre = new TGraphErrors(8,_fx1021,_fy1021,_fex1021,_fey1021);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{EDM} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1021 = new TH1F("Graph_Graph1021","",100,702.6337,2787.237);
   Graph_Graph1021->SetMinimum(1.537535);
   Graph_Graph1021->SetMaximum(1.863027);
   Graph_Graph1021->SetDirectory(0);
   Graph_Graph1021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1021->SetLineColor(ci);
   Graph_Graph1021->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1021->GetXaxis()->CenterTitle(true);
   Graph_Graph1021->GetXaxis()->SetLabelFont(42);
   Graph_Graph1021->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1021->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1021->GetXaxis()->SetTitleFont(42);
   Graph_Graph1021->GetYaxis()->SetTitle("#delta'_{EDM} [mrad] / 250 MeV");
   Graph_Graph1021->GetYaxis()->CenterTitle(true);
   Graph_Graph1021->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1021->GetYaxis()->SetLabelFont(42);
   Graph_Graph1021->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1021->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1021->GetYaxis()->SetTitleFont(42);
   Graph_Graph1021->GetZaxis()->SetLabelFont(42);
   Graph_Graph1021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1021);
   
   
   TF1 *pol01022 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01022->SetFillColor(19);
   pol01022->SetFillStyle(0);
   pol01022->SetLineColor(2);
   pol01022->SetLineWidth(2);
   pol01022->SetChisquare(0.7170229);
   pol01022->SetNDF(7);
   pol01022->GetXaxis()->SetLabelFont(42);
   pol01022->GetXaxis()->SetTitleOffset(1);
   pol01022->GetXaxis()->SetTitleFont(42);
   pol01022->GetYaxis()->SetLabelFont(42);
   pol01022->GetYaxis()->SetTitleFont(42);
   pol01022->SetParameter(0,1.699274);
   pol01022->SetParError(0,0.01725644);
   pol01022->SetParLimits(0,0,0);
   pol01022->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01022);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Sim: acceptedDecaysControl","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 1.7
#pm0.02
 mrad","lpf");
   entry->SetFillColor(19);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
