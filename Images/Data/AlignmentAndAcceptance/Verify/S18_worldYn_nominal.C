void S18_worldYn_nominal()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jan 25 14:10:21 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-0.7500001,-0.7134146,9.75,-0.1267313);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t strawGeometry_worldCoordsYn_station18_fx3[16] = {
   1,
   1,
   2,
   2,
   3,
   3,
   4,
   4,
   5,
   5,
   6,
   6,
   7,
   7,
   8,
   8};
   Double_t strawGeometry_worldCoordsYn_station18_fy3[16] = {
   -0.615634,
   -0.6154512,
   -0.5588861,
   -0.5587033,
   -0.502438,
   -0.5022551,
   -0.4462855,
   -0.4461027,
   -0.3904496,
   -0.3902667,
   -0.3349009,
   -0.3347181,
   -0.2796521,
   -0.2794693,
   -0.2246947,
   -0.2245119};
   TGraph *graph = new TGraph(16,strawGeometry_worldCoordsYn_station18_fx3,strawGeometry_worldCoordsYn_station18_fy3);
   graph->SetName("strawGeometry_worldCoordsYn_station18");
   graph->SetTitle("Nominal");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_strawGeometry_worldCoordsYn_station183 = new TH1F("Graph_strawGeometry_worldCoordsYn_station183","Nominal",100,0.3,8.7);
   Graph_strawGeometry_worldCoordsYn_station183->SetMinimum(-0.6547462);
   Graph_strawGeometry_worldCoordsYn_station183->SetMaximum(-0.1853997);
   Graph_strawGeometry_worldCoordsYn_station183->SetDirectory(0);
   Graph_strawGeometry_worldCoordsYn_station183->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_strawGeometry_worldCoordsYn_station183->SetLineColor(ci);
   Graph_strawGeometry_worldCoordsYn_station183->GetXaxis()->SetTitle("Module number");
   Graph_strawGeometry_worldCoordsYn_station183->GetXaxis()->CenterTitle(true);
   Graph_strawGeometry_worldCoordsYn_station183->GetXaxis()->SetLabelFont(42);
   Graph_strawGeometry_worldCoordsYn_station183->GetXaxis()->SetTitleSize(0.04);
   Graph_strawGeometry_worldCoordsYn_station183->GetXaxis()->SetTitleOffset(1.1);
   Graph_strawGeometry_worldCoordsYn_station183->GetXaxis()->SetTitleFont(42);
   Graph_strawGeometry_worldCoordsYn_station183->GetYaxis()->SetTitle("World y-position [mm]");
   Graph_strawGeometry_worldCoordsYn_station183->GetYaxis()->CenterTitle(true);
   Graph_strawGeometry_worldCoordsYn_station183->GetYaxis()->SetNdivisions(4000510);
   Graph_strawGeometry_worldCoordsYn_station183->GetYaxis()->SetLabelFont(42);
   Graph_strawGeometry_worldCoordsYn_station183->GetYaxis()->SetTitleSize(0.04);
   Graph_strawGeometry_worldCoordsYn_station183->GetYaxis()->SetTitleOffset(1.2);
   Graph_strawGeometry_worldCoordsYn_station183->GetYaxis()->SetTitleFont(42);
   Graph_strawGeometry_worldCoordsYn_station183->GetZaxis()->SetLabelFont(42);
   Graph_strawGeometry_worldCoordsYn_station183->GetZaxis()->SetTitleOffset(1);
   Graph_strawGeometry_worldCoordsYn_station183->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_strawGeometry_worldCoordsYn_station183);
   
   graph->Draw("apl");
   
   TPaveText *pt = new TPaveText(0.4190201,0.94,0.5809799,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Nominal");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
