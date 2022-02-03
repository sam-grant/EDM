void S0_worldYn_1mm()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jan 25 14:10:21 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-0.7500001,8.166082e-16,9.75,9.240412e-14);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t strawGeometry_worldCoordsYn_station0_fx4[16] = {
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
   Double_t strawGeometry_worldCoordsYn_station0_fy4[16] = {
   1.608119e-14,
   1.915496e-14,
   2.449697e-14,
   2.757073e-14,
   3.286865e-14,
   3.594241e-14,
   4.119686e-14,
   4.427062e-14,
   4.947854e-14,
   5.25523e-14,
   5.771796e-14,
   6.079172e-14,
   6.59133e-14,
   6.898706e-14,
   7.406577e-14,
   7.713953e-14};
   TGraph *graph = new TGraph(16,strawGeometry_worldCoordsYn_station0_fx4,strawGeometry_worldCoordsYn_station0_fy4);
   graph->SetName("strawGeometry_worldCoordsYn_station0");
   graph->SetTitle(";Module number;World y-position [mm]");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_strawGeometry_worldCoordsYn_station04 = new TH1F("Graph_strawGeometry_worldCoordsYn_station04","",100,0.3,8.7);
   Graph_strawGeometry_worldCoordsYn_station04->SetMinimum(9.97536e-15);
   Graph_strawGeometry_worldCoordsYn_station04->SetMaximum(8.324537e-14);
   Graph_strawGeometry_worldCoordsYn_station04->SetDirectory(0);
   Graph_strawGeometry_worldCoordsYn_station04->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_strawGeometry_worldCoordsYn_station04->SetLineColor(ci);
   Graph_strawGeometry_worldCoordsYn_station04->GetXaxis()->SetTitle("Module number");
   Graph_strawGeometry_worldCoordsYn_station04->GetXaxis()->CenterTitle(true);
   Graph_strawGeometry_worldCoordsYn_station04->GetXaxis()->SetLabelFont(42);
   Graph_strawGeometry_worldCoordsYn_station04->GetXaxis()->SetTitleSize(0.04);
   Graph_strawGeometry_worldCoordsYn_station04->GetXaxis()->SetTitleOffset(1.1);
   Graph_strawGeometry_worldCoordsYn_station04->GetXaxis()->SetTitleFont(42);
   Graph_strawGeometry_worldCoordsYn_station04->GetYaxis()->SetTitle("World y-position [mm]");
   Graph_strawGeometry_worldCoordsYn_station04->GetYaxis()->CenterTitle(true);
   Graph_strawGeometry_worldCoordsYn_station04->GetYaxis()->SetNdivisions(4000510);
   Graph_strawGeometry_worldCoordsYn_station04->GetYaxis()->SetLabelFont(42);
   Graph_strawGeometry_worldCoordsYn_station04->GetYaxis()->SetTitleSize(0.04);
   Graph_strawGeometry_worldCoordsYn_station04->GetYaxis()->SetTitleOffset(1.2);
   Graph_strawGeometry_worldCoordsYn_station04->GetYaxis()->SetTitleFont(42);
   Graph_strawGeometry_worldCoordsYn_station04->GetZaxis()->SetLabelFont(42);
   Graph_strawGeometry_worldCoordsYn_station04->GetZaxis()->SetTitleOffset(1);
   Graph_strawGeometry_worldCoordsYn_station04->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_strawGeometry_worldCoordsYn_station04);
   
   graph->Draw("apl");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
